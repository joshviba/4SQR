#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    char c[100];
    if (dtAsSeconds > 0) {
        sprintf_s(c, 100, "%5.0f", (1.0f / dtAsSeconds));
    }
    else {
        sprintf_s(c, "%5d", 0);
    }
    std::string fs(c);
    frameRate.setString(fs);

}