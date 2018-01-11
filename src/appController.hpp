#pragma once

#include <QString>
#include <QQmlApplicationEngine>
#include <QJsonObject>
#include <QList>
#include <QTcpSocket>

namespace app {

    class Controller : public QObject {
        Q_OBJECT
    public:
        Controller(QTcpSocket** qtcp) : qtcpPtr(qtcp) {}
        Q_INVOKABLE QJsonObject parseRecipe(QString filePath);
        Q_INVOKABLE void lightNum(QString numList);
    private:
        QTcpSocket** qtcpPtr;
    };
}
