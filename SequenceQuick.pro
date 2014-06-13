# Add more folders to ship with the application, here
folder_01.source = qml/SequenceQuick
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    src/model/card.cpp \
    src/controller/game.cpp \
    src/model/square.cpp \
    src/model/team.cpp \
    src/model/player.cpp \
    src/model/player_human.cpp \
    src/model/board.cpp \
    src/model/player_computer.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    src/model/card.h \
    src/controller/game.h \
    src/model/square.h \
    src/model/team.h \
    src/model/player.h \
    src/model/player_human.h \
    src/model/board.h \
    src/model/player_computer.h \
    src/controller/qt_cpp_interface.h
