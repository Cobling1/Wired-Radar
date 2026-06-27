#pragma once

class Display;

class Radar
{
public:

    void begin(Display* d);

    void update();

    void draw();

private:

    Display* display;

    uint8_t zoomIndex = 2;
};
