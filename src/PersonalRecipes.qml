import QtQuick 2.7
import Fluid.Controls 1.0
import QtQuick.Controls 2.0
import QtQuick.Controls 1.4

Item {
    property var recipe2DList: []

    Component.onCompleted: {
        for (var i = 0; i < personalRecipes.length; ++i) {
            if (i % 2 == 0) {
                recipe2DList.push([])
            }
            recipe2DList[ recipe2DList.length - 1 ].push(personalRecipes[ i ])
        }
        recipe2DList.forEach(function(recipes) {
            row.append({"list": recipes})
        })
    }

    ListView {
        id: scroll
        anchors.fill: parent
        anchors.topMargin: 50
        model: ListModel { id: row }
        spacing: 50
        footer: Rectangle {
            color: "transparent"
            height: 100
        }

        delegate: Item {
            anchors.horizontalCenter: parent.horizontalCenter
            id: delegateItem
            width: 550
            height: 250

            Component.onCompleted: {
                for (var i = 0; i < list.count; ++i) {
                    column.append(list.get(i))
                }
            }

            ListView {
                anchors.fill: parent
                spacing: 50
                orientation: ListView.Horizontal
                model: ListModel { id: column }
                interactive: false

                delegate: Card {
                    id: card
                    width: 250
                    height: 250

                    Image {
                        id: picture
                        anchors {
                            left: parent.left
                            right: parent.right
                            top: parent.top
                        }
                        height: 200
                        source: "file://" + applicationDirPath + "/../../Resource/" + id + "/cover.jpg"

                        BusyIndicator {
                            anchors.centerIn: parent
                            visible: picture.status !== Image.Ready
                        }
                    }

                    Column {
                        anchors {
                            left: parent.left
                            top: picture.bottom
                            right: parent.right
                            margins: 10
                        }

                        Text {
                            font.pointSize: 14
                            text: title
                        }
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            scroll.interactive = false
                            recipe.url = "file://" + applicationDirPath + "/../../Resource/" + id
                            recipe.title = title
                            recipe.state = "visible"
                        }
                    }
                }
            }
        }
    }

    Recipe {
        id: recipe
    }
}
