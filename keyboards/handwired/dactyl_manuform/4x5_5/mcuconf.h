
#pragma once

#include_next <mcuconf.h>

#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE

#undef SPI_SCK_PIN
#define SPI_SCK_PIN D14

#undef SPI_MOSI_PIN
#define SPI_MOSI_PIN D15

#undef SPI_MISO_PIN
#define SPI_MISO_PIN D12

#undef SPI_DRIVER
#define SPI_DRIVER SPID1