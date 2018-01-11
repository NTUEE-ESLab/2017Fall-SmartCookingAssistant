#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "appInstance.hpp"

int main(int argc, char *argv[])
{
    return app::Instance::Execute(argc, argv);
}
