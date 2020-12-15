#include "Engine.h"

Engine::Engine(Vector2f res):
    m_Menu(res),
    m_Resolution(res)
{
    // Get the screen resolution and create an SFML window and View
    //Vector2f resolution;
    m_Window.create(VideoMode(m_Resolution.x, m_Resolution.y),
        "Simple Game Engine",
        Style::Fullscreen);

    if (!m_Font.loadFromFile("fonts/Comfortaa-SemiBold.ttf")) {
        // error
    }
    frameRate.setFont(m_Font);
    frameRate.setCharacterSize(50);
    frameRate.setFillColor(sf::Color::Red);
    frameRate.setPosition(m_Resolution.x - 250, 50);
}

void Engine::start()
{
    // Timing
    Clock clock;
    Clock delayClock;
    bool delayInput = false;
    float inputDelayTimeAsMiliseconds = 1.5f;
    float timeSinceDelay = 0.0f;
    while (m_Window.isOpen())
    {
        // Restart the clock and save the elapsed time into dt
        Time dt = clock.restart();

        // Make a fraction from the delta time
        float dtAsSeconds = dt.asSeconds();

        if (!delayInput) {
            input();
            timeSinceDelay = delayClock.restart().asSeconds();
        }
        update(dtAsSeconds);
        draw();
        if (timeSinceDelay >= inputDelayTimeAsMiliseconds) {
            delayInput = false;
        }
    }
}