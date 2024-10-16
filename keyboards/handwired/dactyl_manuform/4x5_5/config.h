// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define MASTER_RIGHT
// #define USE_I2C

#define PMW33XX_CS_PIN D13
#define POINTING_DEVICE_INVERT_X


#define D0 0U
#define D1 1U
#define D2 2U
#define D3 3U
#define D4 4U
#define D5 5U
#define D6 6U
#define D7 7U
#define D8 8U
#define D9 9U
#define D10 10U
#define D11 11U
#define D12 12U
#define D13 13U
#define D14 14U
#define D15 15U
#define D16 16U
#define D17 17U
#define D18 18U
#define D19 19U
#define D20 20U
#define D21 21U
#define D22 22U
#define D23 23U
#define D24 24U
#define D25 25U
#define D26 26U
#define D27 27U
#define D28 28U
