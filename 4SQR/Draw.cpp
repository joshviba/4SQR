#include "stdafx.h"
#include "Engine.h"

void Engine::draw()
{
    // Rub out the last frame
    m_Window.clear(Color::White);

    // Draw the background
    m_Window.draw(m_BackgroundSprite);
    m_Window.draw(m_Player.getSprite());
    m_Window.draw(m_Hit1.getSprite());
    m_Window.draw(m_Hit2.getSprite());
    m_Window.draw(m_Hit3.getSprite());
    m_Window.draw(m_Hit4.getSprite());

    // Show everything we have just drawn
    m_Window.display();
}