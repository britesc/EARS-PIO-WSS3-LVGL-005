/****************************************************************************  
* Revision Number: 1000  
*****************************************************************************/ 

/*
 * SYSTEM_ws35tlcdPins.h
 */

#pragma once
#ifndef __SYSTEM_WS35TLCD_PINS_H__
#define __SYSTEM_WS35TLCD_PINS_H__

// ============================================================================
// Waveshare ESP32-S3 Touch LCD 3.5" — Hardware Pin Definitions
// Verified from Waveshare wiki schematic and on-device I2C scanner
//
// Change history:
// v0.3 Touch I2C corrected: SDA 38→8, SCL 39→7 (verified via I2C scanner)
// ============================================================================

// TFT Display — SPI
#define GFX_BL    6     // Backlight
#define SPI_MISO  2     // Display MISO
#define SPI_MOSI  1     // Display MOSI
#define SPI_SCLK  5     // Display SCLK
#define LCD_CS   -1     // Chip Select (not used)
#define LCD_DC    3     // Data/Command
#define LCD_RST  -1     // Reset (not used)

// SD Card — SD_MMC 1-bit mode (SDIO interface, verified from schematic)
#define SDMMC_CLK 11    // SD Clock
#define SDMMC_CMD 10    // SD Command
#define SDMMC_D0   9    // SD Data 0

// Touch Controller — I2C (FT6236U / FT3267, Chip ID 0x64, address 0x38)
#define TOUCH_SDA 8     // I2C Data
#define TOUCH_SCL 7     // I2C Clock
#define TOUCH_INT 18    // Interrupt pin
#define TOUCH_RST -1    // Reset (via TCA9554 GPIO expander)

// Display Resolution
#define TFT_WIDTH  480
#define TFT_HEIGHT 320

#endif // __SYSTEM_WS35TLCD_PINS_H__

/****************************************************************************  
* End of SYSTEM_ws35tlcdPins.h  
*****************************************************************************/ 

