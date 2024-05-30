#include "Game.h"

int main() {
    Game game;
    int numCharacters = 2;
    int numTraps = 3;
    int gridWidth = 10;
    int gridHeight = 10;
    int maxIterations = 20;
    double trapActivationDistance = 1.5;

    game.initGame(numCharacters, numTraps, gridWidth, gridHeight);
    game.gameLoop(maxIterations, trapActivationDistance, gridWidth, gridHeight);

    return 0;
}
