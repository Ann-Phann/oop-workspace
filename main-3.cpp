#include <iostream>
#include "Game.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

int main() {
    Game game;

    int numCharacters = 3;
    int numTraps = 5;
    int gridWidth = 10;
    int gridHeight = 10;
    game.initGame(numCharacters, numTraps, gridWidth, gridHeight);

    int maxIterations = 20;
    double trapActivationDistance = 1.5;

    game.gameLoop(maxIterations, trapActivationDistance);

    return 0;
}