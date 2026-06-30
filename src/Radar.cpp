#include "Radar.h"

#include "../graphics/Renderer.h"
#include "../platform/Display.h"
#include "../Config.h"

static Renderer renderer;

void Radar::begin(Display *display)
{
    m_display = display;

    renderer.begin(display);

    m_renderer = &renderer;
}

void Radar::update()
{

}

void Radar::draw()
{
    m_renderer->clear();

    drawRangeRings();

    drawCompass();

    drawCenter();

    drawScale();

    m_renderer->present();
}

void Radar::drawRangeRings()
{
    constexpr uint16_t colour = 0x03E0;

    m_renderer->circle(240,240,200,colour);
    m_renderer->circle(240,240,150,colour);
    m_renderer->circle(240,240,100,colour);
    m_renderer->circle(240,240,50,colour);
}

void Radar::drawCompass()
{
    constexpr uint16_t colour = 0x03E0;

    m_renderer->line(40,240,440,240,colour);

    m_renderer->line(240,40,240,440,colour);

    m_renderer->text(235,8,"N",0xFFFF,2);

    m_renderer->text(235,452,"S",0xFFFF,2);

    m_renderer->text(8,232,"W",0xFFFF,2);

    m_renderer->text(452,232,"E",0xFFFF,2);
}

void Radar::drawCenter()
{
    m_renderer->fillCircle(
        240,
        240,
        6,
        0xFFFF);

    m_renderer->line(
        240,
        220,
        240,
        205,
        0xFFFF);
}

void Radar::drawScale()
{
    char txt[20];

    sprintf(
        txt,
        "%.0f NM",
        ZOOM_LEVELS[zoomIndex]);

    m_renderer->text(
        185,
        25,
        txt,
        0xFFFF,
        2);
}
