import qbs 1.0
import qbs.FileInfo

QtGuiApplication {
    // Allow QtCreator to see imports from the build directory as well as
    // the source directory where your files are located
    property stringList qmlImportPaths: [
        FileInfo.joinPaths(qbs.installRoot, qbs.installPrefix, lirideployment.qmlDir),
        sourceDirectory,
        FileInfo.joinPaths(sourceDirectory, "/../fluid")
    ]

    // Product name
    name: "SmartCookingAssistant"

    // Depends on lirideployment to setup the above paths
    Depends { name: "lirideployment" }

    // Qt dependencies
    Depends { name: "Qt"; submodules: ["core", "gui", "quickcontrols2"] }

    // Android NDK
//    Depends { name: "Android.ndk"; condition: qbs.targetOS.contains("android") }
//    Properties {
//        condition: qbs.targetOS.contains("android")
//        architectures: !qbs.architecture ? ["x86", "armv7a"] : undefined
//        Android.ndk.appStl: "gnustl_shared"
//    }

    // Source files
    files: [
        "*.cpp",
        "*.hpp",
        "*.qrc",
        "QuickStreams/src/*.cpp",
        "QuickStreams/src/*.hpp"
    ]
}
