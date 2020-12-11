#include "HitSquare.h"
#include "stdafx.h"

HitSquare::HitSquare(char type, int x, int y, Time hitTime) :
	m_Approach{ ApproachSquare(x, y, hitTime) },
	m_Type(type),
	m_Position(x, y),
	m_HitTime(hitTime),
	m_ButtonPressed(false)
{

	if (m_Type == TYPE_RED) {
		m_Texture.loadFromFile("hitRed.png");
	}
	else if (m_Type == TYPE_GREEN) {
		m_Texture.loadFromFile("hitRed.png");
	}
	else if (m_Type == TYPE_BLUE) {
		m_Texture.loadFromFile("hitBlue.png");
	}
	else {
		m_Texture.loadFromFile("hitYellow.png");
	}

	m_Sprite.setTexture(m_Texture);
	m_Sprite.setScale(SCALE_MODIFIER, SCALE_MODIFIER);
}

Sprite HitSquare::getSprite()
{
	return m_Sprite;
}

void HitSquare::update(float elapsedTime, int cursorX, int cursorY)
{

}