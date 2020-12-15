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
    Engine engine(Vector2f(VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height));
    // Start engine
    engine.start();
    // Quit game
    return 0;
}