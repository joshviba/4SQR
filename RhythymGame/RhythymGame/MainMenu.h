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
	ArcadeMenu m_ArcadeMenu;
	StoryMenu m_StoryMenu;
	SettingsMenu m_SettingsMenu;

	// Textures and sprites
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	Sprite m_LogoSprite;
	Texture m_LogoTexture;

	Sprite m_StoryModeSprite;
	Texture m_StoryModeTexture;

	Sprite m_ArcadeModeSprite;
	Texture m_ArcadeModeTexture;



	std::vector<Sprite> m_MenuSprites;

	bool m_MainTitle;

public:
	MainMenu(Vector2f resolution);
	// Behaviour of MainMenu
	StoryMenu openStoryMode();
	ArcadeMenu openArcadeMode();
	std::vector<Sprite> getSprites();
	void update(float dtAsSeconds);
	bool onMainTitle();
	void launchMenu();
	void closeMenu();
	Sprite getLogo();
};