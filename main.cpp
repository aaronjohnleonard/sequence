#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

#include "src/controller/qt_cpp_interface.h"
#include "src/controller/game.h"
#include "src/model/card.h"
#include "src/model/board.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/SequenceQuick/main.qml"));
    viewer.showExpanded();

    QQuickItem *interface = viewer.rootObject();

    Game game(2,6);
    game.qmlRoot = interface;

    GameInterface gameInterface;

    QObject::connect(interface, SIGNAL(placeTokenSignal(QVariant, QVariant, QVariant)), &game, SLOT(placeTokenSlot(QVariant, QVariant, QVariant)));


    return app.exec();
}
