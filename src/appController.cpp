#include <QFile>
#include <QIODevice>
#include <QJsonDocument>
#include <QList>
#include <QJsonObject>
#include <QTcpSocket>

#include "appController.hpp"

namespace app {
    Q_INVOKABLE QJsonObject Controller::parseRecipe(QString filePath) {
        QFile file;
        filePath.remove(0, 7);
        file.setFileName(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QString val = file.readAll();
        file.close();
        QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
        QJsonObject object = d.object();
        return object;
    }

    Q_INVOKABLE void Controller::lightNum(QString numList) {
        (*qtcpPtr)->write(numList.toStdString().c_str());
        (*qtcpPtr)->waitForBytesWritten();
    }
}
