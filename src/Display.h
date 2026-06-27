#pragma once

class Display
{
public:

    bool begin();

    void clear();

    void present();

    int width();

    int height();

    void drawPixel(int x,int y,uint16_t c);

    void drawLine(int x1,int y1,int x2,int y2,uint16_t c);

    void drawCircle(int x,int y,int r,uint16_t c);

    void fillCircle(int x,int y,int r,uint16_t c);

    void drawText(
        int x,
        int y,
        const char *txt,
        uint16_t colour,
        uint8_t size=1);

};
