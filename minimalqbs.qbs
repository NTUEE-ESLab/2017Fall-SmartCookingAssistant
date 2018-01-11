import qbs 1.0

Project {
    // Project name
    name: "SmartCookingAssistant"

    // Your sub-projects go here
    references: [
        "src/src.qbs"
    ]

    // Add Fluid search paths here
    qbsSearchPaths: ["fluid/qbs/shared", "fluid/qbs/local"]

    // Minimum Qbs version required (don't go below 1.6)
    minimumQbsVersion: "1.6"

    // Include Fluid project
    SubProject {
        filePath: "fluid/fluid.qbs"

        Properties {
            autotestEnabled: false
        }
    }
}
