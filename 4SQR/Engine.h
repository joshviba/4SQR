#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h";
#include "HitSquare.h"
#include "MainMenu.h"

using namespace sf;

class Engine
{
private:

    // A regular RenderWindow
    RenderWindow m_Window;

    // Declare a sprite and a Texture for the background
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    // An instance of Player
    Player m_Player;
    //HitSquare m_Hit1;
    //HitSquare m_Hit2;
    //HitSquare m_Hit3;
    //HitSquare m_Hit4;




    // Private functions for internal use only
    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // The Engine constructor
    Engine();

    // start will call all the private functions
    void start();

};