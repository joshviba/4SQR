#include "Engine.h"

void Engine::input()
{
    // Handle the player quitting
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        if (m_Menu.onMainTitle()) {
            m_Window.close();
        }
        else {
            m_Menu.closeMenu();
            
        }
    }

    if (Mouse::isButtonPressed(Mouse::Left) || Mouse::isButtonPressed(Mouse::Right)) {
        m_Menu.launchMenu();
    }

    // Handle the player moving
    /**if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Player.moveLeft();
    }
    else
    {
        m_Player.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Player.moveRight();
    }
    else
    {
        m_Player.stopRight();
    }

    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        m_Player.moveUp();
    }
    else
    {
        m_Player.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        m_Player.moveDown();
    }
    else
    {
        m_Player.stopDown();
    }*/

}