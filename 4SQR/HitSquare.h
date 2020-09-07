#include <SFML/Graphics.hpp>
#include "ApproachSquare.h"

using namespace sf;

class HitSquare
{
private:
    // Declare a sprite and a Texture for the HitSquare
    Sprite m_Sprite;
    Texture m_Texture;

    // HitSquare variables;
    char m_Type;
    Vector2f m_Position;
    Time m_Time;
    ApproachSquare m_Approach;

    // Private functions for internal use only


public:
    // Types of squares available
    const char TYPE_RED = 'W';
    const char TYPE_BLUE = 'S';
    const char TYPE_GREEN = 'A';
    const char TYPE_YELLOW = 'D';

    // The Engine constructor
    HitSquare();
    HitSquare(char type, int x, int y);
    // Getters
    Sprite getSprite();

    // We will call this function once every frame
    void update();
};
