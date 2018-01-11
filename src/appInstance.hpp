#pragma once

#include <QString>
#include <QQmlApplicationEngine>
#include <QTcpSocket>

namespace app {

    class Instance {
    private:
        static QQmlApplicationEngine* engine;
    private:
        static QTcpSocket* qtcpSpeech;
        static QTcpSocket* qtcpMSP432;
        static Instance* instance;
        Instance();
        auto init() -> void;
        auto connect() -> void;
    public:
        static auto Connect() -> void;
        static auto Execute(int, char**) -> int;
    };
}
