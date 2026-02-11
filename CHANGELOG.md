# Change Log

All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](http://semver.org/).

## [Unreleased]

## [1.0.1] - 2026-02-11

- Fix SKY66112 FEM overdrive causing USB840X dongles to disconnect under
  thermal stress. Reduced MAX_INPUT from +5 dBm (absolute maximum rating) to
  0 dBm and TXGAIN from 25 dB to 20 dB, keeping total output power at +20 dBm
  while operating the PA well within its recommended input range. This
  eliminates peak current spikes that caused USB voltage droop and dongle
  disconnects in warm enclosures (>65°C).

## [1.0.0] - 2025-12-10

- Initial release of Fanstel USB840X/BU840XE CLI/NCP/RCP firmware. This adds
  support for the Skyworks SKY66112 front-end module present in these devices
  and adds activity LED indicators for debugging purposes. The firmware should
  be installed in conjunction with the Nordic Semiconductor Open bootloader for
  remote (via SSH) firmware updates.

## [0.0.0] - 2024-08-12

- Dummy "not release", for reference.

[unreleased]: https://github.com/widesky/ot-nrf528xx/compare/HEAD..1.0.1
[1.0.1]: https://github.com/widesky/ot-nrf528xx/compare/1.0.1..1.0.0
[1.0.0]: https://github.com/widesky/ot-nrf528xx/compare/1.0.0..0.0.0
