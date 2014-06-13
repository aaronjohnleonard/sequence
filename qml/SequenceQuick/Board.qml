import QtQuick 2.0

Rectangle {

    Grid{

        id: board
        columns:10
        spacing:10

        Image {
            height: 40
            width: 60
            source: "../../images/free.png"
            MouseArea {
                anchors.fill: parent
                onClicked : {
                    placeTokenSignal(0,0,-1)
                }
            }
        }
        Rectangle{
            height:40
            width:60
            Image {
                height: 40
                width: 60
                source: "../../images/Spades/2S.png"
                MouseArea {
                    anchors.fill: parent
                    onClicked : {
                        placeTokenSignal(0,1,2)
                    }
                }
            }
            Image {
                id: token_0_1
                height:0
                width:0
                x: 10
                source: "../../images/redToken.png"
            }
        }
        Rectangle{
            height:40
            width:60
            Image {
                height: 40
                width: 60
                source: "../../images/Spades/3S.png"
                MouseArea {
                    anchors.fill: parent
                    onClicked : {
                        placeTokenSignal(0,2,3)
                    }
                }
            }
            Image {
                id: token_0_2
                height:0
                width:0
                x: 10
                source: "../../images/redToken.png"
            }
        }
        Rectangle{
            height:40
            width:60
            Image {
                height: 40
                width: 60
                source: "../../images/Spades/4S.png"
                MouseArea {
                    anchors.fill: parent
                    onClicked : {
                        placeTokenSignal(0,3,4)
                    }
                }
            }
            Image {
                height:0
                width:0
                x: 10
                source: "../../images/redToken.png"
            }
      }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/5S.png"
            MouseArea {
                anchors.fill: parent
                onClicked : {
                    placeTokenSignal(0,4,5)
                }
            }
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/6S.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/7S.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/8S.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/9S.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/free.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Clubs/6C.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Clubs/5C.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Clubs/4C.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Clubs/3C.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Clubs/2C.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Hearts/AH.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Hearts/KH.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Hearts/QH.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Hearts/10H.png"
        }
        Image {
            height: 40
            width: 60
            source: "../../images/Spades/10S.png"
        }
    }

}
