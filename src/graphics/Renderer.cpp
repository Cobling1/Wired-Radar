#include "Renderer.h"
#include "../platform/Display.h"

void Renderer::begin(Display *display)
{
    m_display = display;
}

void Renderer::clear()
{
    m_display->clear();
}

void Renderer::present()
{
    m_display->present();
}

void Renderer::line(
    int x1,
    int y1,
    int x2,
    int y2,
    uint16_t colour)
{
    m_display->drawLine(
        x1,
        y1,
        x2,
        y2,
        colour);
}

void Renderer::circle(
    int x,
    int y,
    int radius,
    uint16_t colour)
{
    m_display->drawCircle(
        x,
        y,
        radius,
        colour);
}

void Renderer::fillCircle(
    int x,
    int y,
    int radius,
    uint16_t colour)
{
    m_display->fillCircle(
        x,
        y,
        radius,
        colour);
}

void Renderer::text(
    int x,
    int y,
    const char *txt,
    uint16_t colour,
    uint8_t size)
{
    m_display->drawText(
        x,
        y,
        txt,
        colour,
        size);
}
