#include <SFML/Graphics.hpp>

using namespace sf;

class ApproachSquare
{
private:
	// Sprite and texture
	Sprite m_Sprite;
	Texture m_Texture;
	// Position on screen and time since creation
	Vector2f m_Position;
	Time m_Time;
public:
	ApproachSquare(int x, int y, Time dT);
	// Getters
	Sprite getSprite();
	// Gets called every frame
	void update();
};