import QtQuick 2.7
import QtQuick.Controls 2.0

Rectangle {
    property string step
    property int currentStep: 0
    property string url
    width: parent.width
    height: parent.height

    function turnToIngredientPage() {
        stepText.lineHeight = 1.5
        step = ""
        image.source = ""
        for (var i = 0; i < page.recipeContent.ingredients.length; ++i) {
            var ingredient = page.recipeContent.ingredients[ i ]
            step += ingredient.name + ingredient.amount + ":  " + (i+1) + "號位\n"
        }
    }

    function turnToSeasoningPage() {
        stepText.lineHeight = 1.5
        step = ""
        image.source = ""
        for (var i = 0; i < page.recipeContent.seasonings.length; ++i) {
            var seasoning = page.recipeContent.seasonings[ i ]
            step += seasoning.name + seasoning.amount + ":  " + (i+1) + "號位\n"
        }
    }

    function turnToInitialPage() {
        stepText.lineHeight = 1.5
        step = "請將食材與調味料依照以下順序擺放"
        image.source = ""
    }

    function turnToStepPage(stepNum) {
        if (stepNum === page.recipeContent.steps.length) {
            stack.pop()
            cookingPage.parent = null
        }

        controller.lightNum(page.recipeContent.steps[ stepNum ].used.ingredients)
        controller.lightNum(page.recipeContent.steps[ stepNum ].used.seasonings)

        stepText.lineHeight = 1
        step = page.recipeContent.steps[ stepNum ].description
        image.source = url + "/" + currentStep + ".jpg"
    }

    function turnPage(turn) {
        QuickStreams.create(function(mainStream) {
            cookingPage.state = "invisible"
            return QuickStreams.create(function(stream) {
                mainStream.close()
                stream.close()
            }).delay(300)
        })
            .attach(function(mainStream) {
                if (turn) {
                    ++currentStep
                }
                else {
                    --currentStep
                }

                switch(currentStep) {
                case -1:
                    turnToStepPage(page.recipeContent.steps.length)
                    break
                case 0:
                    turnToInitialPage()
                    break
                case 1:
                    turnToIngredientPage()
                    break
                case 2:
                    turnToSeasoningPage()
                    break
                default:
                    turnToStepPage(currentStep)
                }

                return QuickStreams.create(function(stream) {
                    mainStream.close()
                    stream.close()
                })
            })
            .attach(function(mainStream) {
                cookingPage.state = "visible"
                mainStream.close()
                return
            })
    }

    states: [
        State {
            name: "visible"
            PropertyChanges {
                target: stepText
                opacity: 1.0
            }
            PropertyChanges {
                target: image
                opacity: 1.0
            }
        },
        State {
            name: "invisible"
            PropertyChanges {
                target: stepText
                opacity: 0.0
            }
            PropertyChanges {
                target: image
                opacity: 0.0
            }
        }
    ]
    transitions: Transition {
        NumberAnimation {
            property: "opacity"
            duration: 300
        }
    }

    Text {
        opacity: 0.0
        id: stepText
        anchors.horizontalCenter: parent.horizontalCenter;
        y: 50
        text: step
        font.pointSize: 20;
        color: "black"
        width: window.width * 0.75;
        wrapMode: Text.WordWrap;
        lineHeight: 1.5
    }

    Image {
        opacity: 0.0
        id: image
        y: 170;
        anchors.horizontalCenter: parent.horizontalCenter;
        width: 300;
        height: 225;
    }

    MouseArea {
        anchors.fill: parent
        onClicked: turnPage(true)
    }
}
