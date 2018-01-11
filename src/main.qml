import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls.Universal 2.0
import QtQuick.Controls.Material 2.0
import Fluid.Controls 1.0

ApplicationWindow {
    property string appTitle: "你的珍藏"
    property int pageIndex: 0

    function receiveData(num) {
        if (num) {
            if (num == "1") {
                cookingPage.turnPage(true)
            }
            else if (num == "-1") {
                cookingPage.turnPage(false)
            }

            console.log("Get Message: ", msg)
        }
        return
    }

    id: window
    width: 640
    height: 480
    maximumWidth: 640
    maximumHeight: 480
    minimumWidth: 640
    minimumHeight: 480

    visible: true

    decorationTheme: Universal.Dark

    NavigationDrawer {
        id: navDrawer
        height: parent.height

        actions: [
            Action {
                text: "你的珍藏"
                iconName: "action/stars"
                onTriggered: {
                    if (pageIndex === 1) {
                        stack.pop()
                        otherPage.parent = null
                    }
                    appTitle = "你的珍藏"
                    pageIndex = 0
                    navDrawer.close()
                }
            },
            Action {
                text: "商店街"
                iconName: "action/stars"
                onTriggered: {
                    if (pageIndex === 0) {
                        stack.push(otherPage)
                    }
                    appTitle = "商店街"
                    pageIndex = 1
                    navDrawer.close()
                }
            }
        ]
    }

    initialPage: Page {
        property var recipeContent
        property Item personalPage: PersonalRecipes {
            id: personalPage
        }
        property Item otherPage: OtherRecipes {
            id: otherPage
        }
        property Item cooking: CookingPage {
            id: cookingPage
        }

        id: page
        title: window.appTitle

        leftAction: Action {
            iconName: "navigation/menu"
            onTriggered: navDrawer.open()
        }

        StackView {
            id: stack
            initialItem: personalPage
            anchors.fill: parent
        }

    }
}
