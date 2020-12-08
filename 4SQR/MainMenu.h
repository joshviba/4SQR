#include <SFML/Graphics.hpp>
#include "ArcadeMode.h"
#include "StoryMode.h"
#include "SettingsMenu.h"

using namespace sf;

class MainMenu
{
private:
	// Object members of MainMenu
	ArcadeMode m_Arcade;
	StoryMode m_Story;
	SettingsMenu m_Settings;

	

public:
	// Behaviour of MainMenu
	StoryMode openStoryMode();
	ArcadeMode openArcadeMode();

};