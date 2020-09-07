#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
    // Handle the player quitting
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // Handle the player moving
    if (Keyboard::isKeyPressed(Keyboard::A))
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
    }

}