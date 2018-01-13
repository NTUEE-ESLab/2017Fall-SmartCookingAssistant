import QtQuick 2.7
import Fluid.Controls 1.0
import QtQuick.Controls 2.0
import QtQuick.Controls 1.4

Item {
    property string url
    property string title

    id: recipe
    anchors.fill: parent
    opacity: 0.0

    state: "invisible"

    onStateChanged: {
        QuickStreams.create(function(mainStream) {
            page.recipeContent = controller.parseRecipe(url + "/recipe.json")
            return QuickStreams.create(function(stream) {
                mainStream.close()
                stream.close()
            }).delay(100)
        })
            .attach(function(mainStream){
                ingredients.clear()
                for (var i = 0; i < page.recipeContent.ingredients.length; ++i) {
                    ingredients.append(page.recipeContent.ingredients[ i ])
                }
                seasonings.clear()
                for (var i = 0; i < page.recipeContent.seasonings.length; ++i) {
                    seasonings.append(page.recipeContent.seasonings[ i ])
                }
                steps.clear()
                for (var i = 0; i < page.recipeContent.steps.length; ++i) {
                    steps.append(page.recipeContent.steps[ i ])
                }
                mainStream.close()
                return
            })
    }

    states: [
        State {
            name: "visible"
            PropertyChanges {
                target: recipe
                opacity: 1.0
                visible: true
            }
        },
        State {
            name: "invisible"
            PropertyChanges {
                target: recipe
                opacity: 0.0
                visible: false
            }
        }
    ]
    transitions: Transition {
        NumberAnimation {
            property: "opacity"
            duration: 800
        }
    }

    Rectangle {
        anchors.fill: parent
        color: "gray"
        opacity: 0.5
    }

    Flickable {
        anchors.fill: parent
        contentWidth: window.width
        contentHeight: contentItem.childrenRect.height + 80

        Rectangle {
            width: window.width - 80
            height: childrenRect.height + 80
            x: 40
            y: 40
            color: "white"

            Icon {
                anchors {
                    margins: 10
                    right: parent.right
                    top: parent.top
                }
                name: "content/clear"

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        scroll.interactive = true
                        recipe.state = "invisible"
                    }
                }
            }

            Image {
                id: image
                source: recipe.url + "/cover.jpg"
                anchors {
                    top: parent.top
                    margins: 30
                    horizontalCenter: parent.horizontalCenter
                }
                width: 300
                height: 250
            }

            Icon {
                name: "av/play_circle_filled_white"
                anchors.centerIn: image
                size: 70

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        cookingPage.turnToInitialPage()
                        cookingPage.url = url
                        stack.push(cookingPage)
                        cookingPage.state = "visible"
                    }
                }
            }

            Text {
                id: recipeTitle
                text: recipe.title
                font.pointSize: 20
                anchors {
                    top: image.bottom
                    left: parent.left
                    right: parent.left
                }
                leftPadding: 40
                rightPadding: 40
                topPadding: 40
            }

            Text {
                id: ingredientTitle
                text: "食材"
                font.pointSize: 15
                anchors {
                    top: recipeTitle.bottom
                    left: parent.left
                    right: parent.right
                }
                topPadding: 20
                leftPadding: 40
                rightPadding: 40
                bottomPadding: 20
            }

            ListView {
                id: ingredientList
                anchors {
                    top: ingredientTitle.bottom
                    left: parent.left
                    right: parent.right
                    bottomMargin: 20
                }
                height: childrenRect.height
                interactive: false
                model: ListModel { id: ingredients }
                delegate: Text {
                    height: 20
                    text: name + amount
                    font.pointSize: 12
                    leftPadding: 80
                    rightPadding: 80
                    bottomPadding: 2
                }
            }

            Text {
                id: seasoningTitle
                text: "調味料"
                font.pointSize: 15
                anchors {
                    top: ingredientList.bottom
                    left: parent.left
                    right: parent.right
                }
                topPadding: 20
                leftPadding: 40
                rightPadding: 40
                bottomPadding: 20
            }

            ListView {
                id: seasoningList
                anchors {
                    top: seasoningTitle.bottom
                    left: parent.left
                    right: parent.right
                }
                height: childrenRect.height
                interactive: false
                model: ListModel { id: seasonings }
                delegate: Text {
                    height: 20
                    text: name + amount
                    font.pointSize: 12
                    leftPadding: 80
                    rightPadding: 80
                    bottomPadding: 2
                }
            }
            Text {
                id: stepTitle
                text: "步驟"
                font.pointSize: 15
                anchors {
                    top: seasoningList.bottom
                    left: parent.left
                    right: parent.right
                }
                topPadding: 20
                leftPadding: 40
                rightPadding: 40
                bottomPadding: 20
            }

            ListView {
                anchors {
                    top: stepTitle.bottom
                    left: parent.left
                    right: parent.right
                }
                height: childrenRect.height
                interactive: false
                model: ListModel { id: steps }
                delegate: Item {
                    width: parent.width
                    height: childrenRect.height
                    anchors {
                        left: parent.left
                        right: parent.right
                        leftMargin: 80
                        rightMargin: 80
                        bottomMargin: 2
                    }

                    Text {
                        anchors.left: parent.left
                        width: 30
                        text: index + 1 + "."
                        font.pointSize: 12
                    }

                    Text {
                        anchors.right: parent.right
                        width: parent.width - 30
                        text: description
                        font.pointSize: 12
                        wrapMode: Text.WordWrap;
                    }
                }
            }

        }
    }
}
