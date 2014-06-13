import QtQuick 2.0
import QtQuick.Controls 1.0

Rectangle {
    id: root

    signal placeTokenSignal(var row, var col, var card)

    function placeToken(row, col){
        board.children[0].children[row*10+col].children[1].width = 40
        board.children[0].children[row*10+col].children[1].height = 40
        mainText.text = "worked"
    }

    MenuBar {
        Menu {
            title: "File"
            MenuItem { text: "Open..." }
            MenuItem { text: "Close" }
        }

        Menu {
            title: "Edit"
            MenuItem { text: "Cut" }
            MenuItem { text: "Copy" }
            MenuItem { text: "Paste" }
        }
    }

    width: 900
    height: 700

    Row{
        Board{
            width: 700
            height: 500
            id:board
        }

        Text {
            id: mainText
            text: qsTr("Hello World")
        }
    }
}
