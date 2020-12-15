#include "Engine.h"

void Engine::draw()
{
    // Rub out the last frame
    m_Window.clear(Color::White);

    // Draw the background
    std::vector<Sprite> receivedSprites = m_Menu.getSprites();
    for (std::vector<Sprite>::iterator it = receivedSprites.begin(); it != receivedSprites.end(); ++it ) {
        /* do something useful */
        m_Window.draw(*it);
    }
    m_Window.draw(frameRate);
    //m_Window.draw(m_Player.getSprite());
    //m_Window.draw(m_Hit1.getSprite());
    //m_Window.draw(m_Hit2.getSprite());
    //m_Window.draw(m_Hit3.getSprite());
    //m_Window.draw(m_Hit4.getSprite());

    // Show everything we have just drawn
    m_Window.display();
}