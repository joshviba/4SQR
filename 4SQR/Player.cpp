#include "stdafx.h"
#include "Player.h"

Player::Player()
{
    // How fast does Bob move?
    m_Speed = 400;

    // Associate a texture with the sprite
    m_Texture.loadFromFile("player.png");
    m_Sprite.setTexture(m_Texture);
    m_Sprite.setScale(0.25f, 0.25f);

    // Set the Bob's starting position
    m_Position.x = 0;
    m_Position.y = 0;

    m_LeftPressed = false;
    m_RightPressed = false;
    m_UpPressed = false;
    m_DownPressed = false;
}

Player::Player(int x, int y)
{
    // How fast does Bob move?
    m_Speed = 400;

    // Associate a texture with the sprite
    m_Texture.loadFromFile("player.png");
    m_Sprite.setTexture(m_Texture);
    m_Sprite.setScale(0.25f, 0.25f);

    // Set the Bob's starting position
    m_Position.x = x;
    m_Position.y = y;

    m_LeftPressed = false;
    m_RightPressed = false;
    m_UpPressed = false;
    m_DownPressed = false;
}

// Make the private spite available to the draw() function
Sprite Player::getSprite()
{
    return m_Sprite;
}

void Player::moveLeft()
{
    m_LeftPressed = true;
}

void Player::moveRight()
{
    m_RightPressed = true;
}

void Player::moveUp()
{
    m_UpPressed = true;
}

void Player::moveDown()
{
    m_DownPressed = true;
}

void Player::stopLeft()
{
    m_LeftPressed = false;
}

void Player::stopRight()
{
    m_RightPressed = false;
}

void Player::stopUp()
{
    m_UpPressed = false;
}

void Player::stopDown()
{
    m_DownPressed = false;
}

// Move Player based on the input this frame,
// the time elapsed, and the speed
void Player::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    if (m_UpPressed)
    {
        m_Position.y -= m_Speed * elapsedTime;
    }

    if (m_DownPressed)
    {
        m_Position.y += m_Speed * elapsedTime;
    }

    // Now move the sprite to its new position
    m_Sprite.setPosition(m_Position);

}