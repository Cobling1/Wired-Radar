#pragma once

class Display;
class Renderer;

class Radar
{
public:

    void begin(Display *display);

    void update();

    void draw();

private:

    Display *m_display;

    Renderer *m_renderer;

    uint8_t zoomIndex = 2;

    void drawCompass();

    void drawRangeRings();

    void drawCenter();

    void drawScale();
};
