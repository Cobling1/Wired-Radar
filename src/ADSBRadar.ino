#include "Config.h"
#include "Version.h"

#include "platform/Display.h"
#include "radar/Radar.h"

Display display;
Radar radar;

void setup()
{
    Serial.begin(115200);

    display.begin();

    radar.begin(&display);
}

void loop()
{
    radar.update();

    radar.draw();
}
