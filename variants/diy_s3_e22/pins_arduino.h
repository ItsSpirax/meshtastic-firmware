#pragma once

#include <stdint.h>

// --- Standard Arduino Core Bus Definitions ---
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS    = 10;
static const uint8_t MOSI  = 11;
static const uint8_t SCK   = 12;
static const uint8_t MISO  = 13;

// --- Radio Driver Selection ---
#define USE_SX1262

// --- SPI Pin Aliases for Meshtastic ---
#define LORA_SCK  SCK
#define LORA_MISO MISO
#define LORA_MOSI MOSI
#define LORA_CS   SS

// --- SX126x Control Pins ---
#define SX126X_CS    10
#define SX126X_SCK   12
#define SX126X_MOSI  11
#define SX126X_MISO  13
#define SX126X_RESET 5
#define SX126X_BUSY  4
#define SX126X_DIO1  14

// Generic aliases
#define LORA_RESET SX126X_RESET
#define LORA_BUSY  SX126X_BUSY
#define LORA_DIO1  SX126X_DIO1

// --- Ebyte E22 RF Switch & TCXO Control ---
#define EBYTE_E22_900M30S
#define LORA_RXEN 6
#define SX126X_RXEN 6
#define SX126X_DIO2_AS_RF_SWITCH true
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// --- GPS Pins (NEO-6M) ---
#define HAS_GPS 1
#define GPS_UBLOX
#define GPS_RX_PIN 21   // ESP32 RX <- GPS TX
#define GPS_TX_PIN -1   // Listen-only (Protects Octal PSRAM (Pin 35))

// --- I2C Pins (BMP280) ---
#define HAS_TELEMETRY 1
#define HAS_SENSOR 1
#define I2C_SDA SDA
#define I2C_SCL SCL

// --- Neopixel (WS2812) ---
#define ENABLE_AMBIENTLIGHTING
#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA 38
#define NEOPIXEL_TYPE (NEO_RGB + NEO_KHZ800)