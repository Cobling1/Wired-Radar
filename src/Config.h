#pragma once

//======================================================
// Wired Radar
// Global Configuration
//======================================================

#define APP_NAME        "Wired Radar"
#define APP_VERSION     "0.1.0"

// Display
constexpr uint16_t SCREEN_WIDTH  = 480;
constexpr uint16_t SCREEN_HEIGHT = 480;

constexpr int16_t CENTER_X = SCREEN_WIDTH / 2;
constexpr int16_t CENTER_Y = SCREEN_HEIGHT / 2;

// Radar

constexpr float ZOOM_LEVELS[] =
{
    5.0f,
    10.0f,
    20.0f,
    40.0f,
    80.0f,
    160.0f
};

constexpr uint8_t NUM_ZOOM_LEVELS =
    sizeof(ZOOM_LEVELS) / sizeof(float);

// Aircraft

constexpr uint16_t MAX_AIRCRAFT = 200;

// Frame Rate

constexpr uint16_t TARGET_FPS = 60;

// Colours (RGB565)

constexpr uint16_t COLOR_BACKGROUND = 0x0000;
constexpr uint16_t COLOR_RING       = 0x03E0;
constexpr uint16_t COLOR_TEXT       = 0xFFFF;
constexpr uint16_t COLOR_AIRCRAFT   = 0xFFFF;
constexpr uint16_t COLOR_SELECTED   = 0xFFE0;
constexpr uint16_t COLOR_WARNING    = 0xF800;
