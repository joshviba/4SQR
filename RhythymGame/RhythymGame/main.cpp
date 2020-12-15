/*

Author: Josue Villegas

*/

// Include Statements
#include "Engine.h"

using namespace sf;

/* The main entry point into the program.

*/
int main() {
    // Declare engine
    Engine engine(Vector2f(VideoMode::getDesktopMode().width/2, VideoMode::getDesktopMode().height/2));
    // Start engine
    engine.start();
    // Quit game
    return 0;
}