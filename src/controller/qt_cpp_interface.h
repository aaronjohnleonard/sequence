#ifndef QT_CPP_INTERFACE_H
#define QT_CPP_INTERFACE_H

#include <QtGui/QGuiApplication>
#include <QQuickItem>
#include <QtDebug>
#include <iostream>

class GameInterface
{

public:

    GameInterface(){}

    void clickedSomethingSlot(){
        qDebug() << "cLIckeD SomeTHIng";
    }

};

#endif // QT_CPP_INTERFACE_H
