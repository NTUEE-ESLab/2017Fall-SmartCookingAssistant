#include "appInstance.hpp"
#include "appController.hpp"
#include "QuickStreams.hpp"

#include <QFontDatabase>
#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlEngine>
#include <QDirIterator>
#include <QDir>
#include <QSize>
#include <QtQuick>
#include <QTcpSocket>
#include <QTextStream>
#include <QThread>

namespace app {

    Instance* Instance::instance = nullptr;
    QQmlApplicationEngine* Instance::engine = nullptr;
    QTcpSocket* Instance::qtcpSpeech = nullptr;
    QTcpSocket* Instance::qtcpMSP432 = nullptr;

    Instance::Instance() {
    }

    auto Instance::init() -> void {
        engine = new QQmlApplicationEngine;
        engine->addImportPath("../fluid/qml");
        QFile file;
        file.setFileName(":/recipes");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QString val = file.readAll();
        file.close();
        QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
        QJsonArray recipes = d.array();

        engine->rootContext()->setContextProperty("personalRecipes", recipes);

        engine->rootContext()->setContextProperty("controller", new Controller(&qtcpMSP432));

        auto provider = new quickstreams::Provider;
        auto qmlProvider = new quickstreams::qml::QmlProvider(engine, provider);
        engine->rootContext()->setContextProperty("QuickStreams", qmlProvider);

        engine->rootContext()->setContextProperty("applicationDirPath", QGuiApplication::applicationDirPath());

        engine->load(QUrl(QStringLiteral("qrc:/main.qml")));
    }

    auto Instance::Connect() -> void {
        QTextStream out(stdout);
        out << "connect start" << endl;
        qtcpSpeech = new QTcpSocket;
        qtcpSpeech->connectToHost("192.168.1.153", 8001, QIODevice::ReadWrite);
        qtcpSpeech->waitForConnected();/*
        qtcpMSP432 = new QTcpSocket;
        qtcpMSP432->connectToHost("192.168.1.153", 8002, QIODevice::ReadWrite);
        qtcpMSP432->waitForConnected();*/

        while(1) {
            qtcpSpeech->waitForReadyRead();
            QVariant msg = QVariant(qtcpSpeech->readAll());
            QMetaObject::invokeMethod(engine->rootObjects().first(), "receiveData", (QGenericReturnArgument)NULL, Q_ARG(QVariant, msg));
        }
    }

    auto Instance::Execute(int argc, char** argv) -> int {

        QGuiApplication application(argc, argv);

        if (!instance) {
            instance = new Instance();
            instance->init();
            QThread* qthread = QThread::create(Instance::Connect);
            qthread->start();
            return application.exec();
        }

        return 1;
    }
}
