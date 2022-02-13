#ifndef game_h
#define game_h
#include "window.h"

class Game {
    private :
        bool isRunning;
        int w;
        int h;
        Window window;

    public:
        Game();
        ~Game();
        void handleEvents();
        void update();
        void draw();
        void gameLoop();
        void game(); // while(isRunning) {gameLoop()}
};

#endif game_h