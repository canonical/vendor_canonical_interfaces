# Android HAL interfaces for Canonical Anbox Cloud

## Description

This repository contains the interface definitions for Anbox specific hardware abstraction layer (HAL), including HIDL specifications, along with reference implementations for some interfaces, such as VHAL. This allows Android system developers to extend or customize HAL implementations to meet specific hardware requirements, simplify integration with the Anbox runtime.

## Usage

### [Anbox VHAL HIDL](vehicle)

This Anbox VHAL (Vehicle HAL) interface is built on top of Android's [`android.hardware.automotive.vehicle@2.0`](https://android.googlesource.com/platform/hardware/interfaces/+/refs/heads/main/automotive/vehicle/2.0/types.hal) HIDL interface. By implementing this HIDL, the VHAL implementation allows the [Anbox VHAL adapter](https://documentation.ubuntu.com/anbox-cloud/en/latest/explanation/aaos) to

- modify non-writable vehicle property values.
- access non-readable vehicle property values.

Please refer to our [instructions](https://documentation.ubuntu.com/anbox-cloud/en/latest/howto/android/custom-vhal/) for guidance on using and integrating the Anbox VHAL interface into a VHAL implementation.

## Contributing

We welcome contributions from the community to improve this project. To contribute, please follow these guidelines:

1. Fork the repository and create your fork from the `main` branch.
2. Ensure that your code adheres to the established [coding standards and practices](https://ubuntu.com/community/ethos/code-of-conduct).
3. Test your changes to ensure that automated tests pass with the modifications you made.
4. Provide relevant documentation updates if needed.
5. Sign the [contributor agreement](https://ubuntu.com/legal/contributors), submit a pull request, outlining the purpose and scope of your changes.

Our team will review your contribution and collaborate with you to integrate it into the SDK.

## Bug report

To report issues, please submit a [bug](https://bugs.launchpad.net/anbox-cloud/+filebug) to Anbox Cloud project on Launchpad.

## License

The content of this repository is licensed under the terms of the Apache 2.0 license. For more details, refer to the [LICENSE](LICENSE) file for details.
