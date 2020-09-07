#include "ApproachSquare.h"
#include "stdafx.h"

ApproachSquare::ApproachSquare(int x, int y, Time dT)
{
	m_Texture.loadFromFile("approach.png");
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setScale(0.25f, 0.25f);

	m_Position.x = x;
	m_Position.y = y;

	m_Time = dT;
}

Sprite ApproachSquare::getSprite()
{
	return m_Sprite;
}

void ApproachSquare::update()
{
	m_Sprite.setPosition(m_Position);
}