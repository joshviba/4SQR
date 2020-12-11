#pragma once
#include <SFML/Graphics.hpp>
#include "ArcadeMenu.h"
#include "StoryMenu.h"
#include "SettingsMenu.h"

using namespace sf;

class MainMenu
{
private:
	// Object members of MainMenu
	ArcadeMenu m_Arcade;
	StoryMenu m_Story;
	SettingsMenu m_Settings;

	// Textures and sprites
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;


public:
	// Behaviour of MainMenu
	StoryMenu openStoryMode();
	ArcadeMenu openArcadeMode();

};