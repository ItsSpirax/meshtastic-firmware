#pragma once

// Waveshare ESP32-S3 dev board (N16R8) + EBYTE E22-900M30S

#define HAS_SCREEN 0

// --- Radio Driver Selection ---
#define USE_SX1262

// --- LoRa SPI ---
#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 10

// --- SX126x Control Pins ---
#define SX126X_CS LORA_CS
#define SX126X_RESET 5
#define SX126X_BUSY 4
#define SX126X_DIO1 14

// Generic aliases
#define LORA_RESET SX126X_RESET
#define LORA_DIO1 SX126X_DIO1

// --- Ebyte E22 RF Switch & TCXO Control ---
#define EBYTE_E22_900M30S // sets TX_GAIN_LORA / SX126X_MAX_POWER in configuration.h
#define SX126X_RXEN 6
#define SX126X_DIO2_AS_RF_SWITCH // DIO2 wired to TXEN
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// --- GPS Pins (NEO-6M) ---
#define GPS_RX_PIN 21 // ESP32 RX <- GPS TX
#define GPS_TX_PIN -1 // Listen-only (Protects Octal PSRAM (Pin 35))
#define GPS_BAUDRATE 9600
#define GPS_GENERIC_NMEA // Listen-only GPS cannot answer the chip probe; read its NMEA stream directly

// --- I2C Pins (BMP280) ---
#define I2C_SDA 8
#define I2C_SCL 9

// --- Neopixel (onboard WS2812) ---
#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA 38
#define NEOPIXEL_TYPE (NEO_RGB + NEO_KHZ800)
