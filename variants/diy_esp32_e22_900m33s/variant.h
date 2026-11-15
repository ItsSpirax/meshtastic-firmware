#pragma once

// DOIT ESP32 DevKit V1 + EBYTE E22-900M33S

#define HAS_SCREEN 0

// --- Radio Driver Selection ---
#define USE_SX1262

// --- LoRa SPI ---
#define LORA_SCK 18
#define LORA_MISO 19
#define LORA_MOSI 32
#define LORA_CS 4

// --- SX126x Control Pins ---
#define SX126X_CS LORA_CS
#define SX126X_RESET 13
#define SX126X_BUSY 14
#define SX126X_DIO1 27

// Generic aliases
#define LORA_RESET SX126X_RESET
#define LORA_DIO1 SX126X_DIO1

// --- Ebyte E22 RF Switch & TCXO Control ---
#define EBYTE_E22_900M33S            // sets TX_GAIN_LORA / SX126X_MAX_POWER in configuration.h
#define LORA_POWER_LIMIT_OVERRIDE 33 // Module's rated output; only used when TX power is set above the region limit
#define SX126X_RXEN 25
#define SX126X_TXEN 26
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// --- GPS Pins (NEO-6M) ---
#define GPS_RX_PIN 16 // ESP32 RX <- GPS TX
#define GPS_TX_PIN 17 // ESP32 TX -> GPS RX

// --- I2C Pins (BMP280) ---
#define I2C_SDA 22
#define I2C_SCL 23

// --- Neopixel (WS2812B 4x4) ---
#define HAS_NEOPIXEL
#define NEOPIXEL_RAINBOW_SNAKE // Colour set to black shows a rainbow chase along the matrix instead of a colour cycle
#define NEOPIXEL_COUNT 16
#define NEOPIXEL_DATA 21
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800)
