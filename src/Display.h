#pragma once

#include <Arduino.h>
#include <Arduino_GFX_Library.h>

class Display
{
public:
    bool begin();

    void clear(uint16_t colour = 0x0000);
    void present();

    void drawPixel(int16_t x, int16_t y, uint16_t colour);
    void drawLine(int16_t x1, int16_t y1,
                  int16_t x2, int16_t y2,
                  uint16_t colour);

    void drawCircle(int16_t x,int16_t y,int16_t r,uint16_t colour);
    void fillCircle(int16_t x,int16_t y,int16_t r,uint16_t colour);

    void drawText(
        int16_t x,
        int16_t y,
        const char *text,
        uint16_t colour,
        uint8_t size = 1);

    uint16_t width() const;
    uint16_t height() const;

    Arduino_GFX *gfx();

private:

    Arduino_GFX *_gfx = nullptr;
};
