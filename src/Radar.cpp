#include "Radar.h"
#include "../platform/Display.h"
#include "../Config.h"

void Radar::begin(Display* d)
{
    display = d;
}

void Radar::update()
{

}

void Radar::draw()
{
    display->clear();

    display->drawCircle(
        240,
        240,
        RADAR_RADIUS,
        0x07E0);

    display->drawCircle(
        240,
        240,
        RADAR_RADIUS/2,
        0x07E0);

    display->drawLine(
        240,
        30,
        240,
        450,
        0x07E0);

    display->drawLine(
        30,
        240,
        450,
        240,
        0x07E0);

    display->fillCircle(
        240,
        240,
        6,
        0xFFFF);

    display->drawText(
        230,
        10,
        "N",
        0xFFFF,
        2);

    display->present();
}
