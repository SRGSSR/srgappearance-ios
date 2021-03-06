// swift-tools-version:5.3

import PackageDescription

struct ProjectSettings {
    static let marketingVersion: String = "3.0.2"
}

let package = Package(
    name: "SRGAppearance",
    platforms: [
        .iOS(.v9),
        .tvOS(.v12)
    ],
    products: [
        .library(
            name: "SRGAppearance",
            targets: ["SRGAppearance"]
        )
    ],
    targets: [
        .target(
            name: "SRGAppearance",
            resources: [
                .process("Fonts")
            ],
            cSettings: [
                .define("MARKETING_VERSION", to: "\"\(ProjectSettings.marketingVersion)\""),
                .define("NS_BLOCK_ASSERTIONS", to: "1", .when(configuration: .release))
            ]
        ),
        .testTarget(
            name: "SRGAppearanceTests",
            dependencies: ["SRGAppearance"],
            resources: [
                .process("Resources")
            ]
        )
    ]
)
