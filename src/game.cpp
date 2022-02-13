#include "game.h"

Game::Game(){
    isRunning = true;
    window = Window(1600,900);
};
Game::~Game(){

};
void Game::gameLoop(){
    while(isRunning){
        handleEvents();
        update();
        draw();
    }
};

void Game::game(){
    // TODO : Init
    gameLoop();
};