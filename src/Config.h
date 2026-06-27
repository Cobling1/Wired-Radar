#pragma once

#define APP_NAME "Wired Radar"

constexpr uint16_t SCREEN_WIDTH = 480;
constexpr uint16_t SCREEN_HEIGHT = 480;

constexpr uint16_t RADAR_RADIUS = 210;

constexpr uint16_t TARGET_FPS = 60;

constexpr uint16_t MAX_AIRCRAFT = 200;

constexpr float ZOOM_LEVELS[] =
{
    5,
    10,
    20,
    40,
    80,
    160
};

constexpr uint8_t ZOOM_COUNT =
sizeof(ZOOM_LEVELS) / sizeof(float);
