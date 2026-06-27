#pragma once

#include <Arduino.h>

struct Aircraft
{
    uint32_t icao = 0;

    char callsign[9] = "";

    float latitude = 0;
    float longitude = 0;

    float distanceNM = 0;
    float bearing = 0;

    float x = 0;
    float y = 0;

    uint16_t altitude = 0;
    uint16_t speed = 0;
    uint16_t heading = 0;

    uint32_t lastUpdate = 0;

    bool active = false;
};
