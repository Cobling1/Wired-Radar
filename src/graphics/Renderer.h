#pragma once

#include <Arduino.h>

class Display;

class Renderer
{
public:

    void begin(Display *display);

    void clear();

    void present();

    void line(
        int x1,
        int y1,
        int x2,
        int y2,
        uint16_t colour);

    void circle(
        int x,
        int y,
        int radius,
        uint16_t colour);

    void fillCircle(
        int x,
        int y,
        int radius,
        uint16_t colour);

    void text(
        int x,
        int y,
        const char *txt,
        uint16_t colour,
        uint8_t size = 1);

private:

    Display *m_display;
};
