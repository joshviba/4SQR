#include "MainMenu.h"

MainMenu::MainMenu(Vector2f resolution) {
	m_MainTitle = true;

	Vector2f origin(resolution.x / 2, resolution.y / 2);
	m_BackgroundTexture.loadFromFile("images/mainMenuBG.png");
	m_BackgroundSprite.setTexture(m_BackgroundTexture);

	m_LogoTexture.loadFromFile("images/logo.png");
	m_LogoSprite.setTexture(m_LogoTexture);

	m_StoryModeTexture.loadFromFile("images/storyMode.png");
	m_StoryModeSprite.setTexture(m_StoryModeTexture);

	m_ArcadeModeTexture.loadFromFile("images/arcadeMode.png");
	m_ArcadeModeSprite.setTexture(m_ArcadeModeTexture);
	
	Vector2f bgSize = (Vector2f) m_BackgroundTexture.getSize();
	Vector2f scale(resolution.x / bgSize.x, resolution.y / bgSize.y);
	m_BackgroundSprite.setScale(scale);
	
	bgSize = (Vector2f)m_LogoTexture.getSize();
	scale.x = resolution.y / bgSize.y;
	scale.y = scale.x;

	m_LogoSprite.setScale(scale);
	m_LogoSprite.setPosition((resolution.x / 2) 
		- (m_LogoTexture.getSize().x * scale.x / 2),0);
	
	bgSize = (Vector2f)m_StoryModeTexture.getSize();
	scale.y = resolution.y / bgSize.y / 6;
	scale.x = scale.y;
	Vector2f position((resolution.x / 2)
		- (m_StoryModeTexture.getSize().x * scale.x / 2)
		, resolution.y / 12.0f);

	m_StoryModeSprite.setScale(scale);
	m_StoryModeSprite.setPosition(position);

	position.y += bgSize.y * scale.y;

	m_ArcadeModeSprite.setScale(scale);
	m_ArcadeModeSprite.setPosition(position);

	m_MenuSprites.push_back(m_BackgroundSprite);
	m_MenuSprites.push_back(m_LogoSprite);
}

void MainMenu::launchMenu() {
	m_MainTitle = false;

	m_MenuSprites.pop_back();
	m_MenuSprites.push_back(m_ArcadeModeSprite);
	m_MenuSprites.push_back(m_StoryModeSprite);
}

void MainMenu::closeMenu() {
	m_MainTitle = true;

	m_MenuSprites.pop_back();
	m_MenuSprites.pop_back();
	m_MenuSprites.push_back(m_LogoSprite);
}

bool MainMenu::onMainTitle() {
	return m_MainTitle;
}

std::vector<Sprite> MainMenu::getSprites() {
	return m_MenuSprites;
}

Sprite MainMenu::getLogo() {
	return m_LogoSprite;
}