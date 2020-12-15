#pragma once
#include <SFML/Graphics.hpp>
#include "MainMenu.h"
#include "Player.h";
#include "HitSquare.h"

using namespace sf;

class Engine
{
private:

    // A regular RenderWindow
    RenderWindow m_Window;
    MainMenu m_Menu;
    Vector2f m_Resolution;
    Font m_Font;
    Text frameRate;

    // Private functions for internal use only
    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // The Engine constructor
    Engine(Vector2f res);

    // start will call all the private functions
    void start();

};