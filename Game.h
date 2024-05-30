#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Cell.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

class Game {
private:
    std::vector<Cell*> grid;
    int gridWidth;
    int gridHeight;

public:
    Game() {
        std::srand(static_cast<unsigned int>(std::time(0))); // Seed for random number generation
    }

    // Getter for entities
    std::vector<Cell*>& getGrid() {
        return grid;
    }

    // Setter for entities
    void setGrid(const std::vector<Cell*>& new_entities) {
        this->grid = new_entities;
    }

    // Initializes the game with specified numbers of characters and traps
    std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;

        // Clear existing entities
        grid.clear();

        // Initialize characters with random positions
        for (int i = 0; i < numCharacters; i++) {
            auto position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* character = new Character(std::get<0>(position), std::get<1>(position));
            grid.push_back(character);
        }

        // Initialize traps with random positions
        for (int j = 0; j < numTraps; j++) {
            auto position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* trap = new Trap(std::get<0>(position), std::get<1>(position));
            grid.push_back(trap);
        }

        return grid;
    }

    // Simulates the game
    void gameLoop(int maxIterations, double trapActivationDistance) 
    {
        for (int iteration = 0; iteration < maxIterations; iteration++) {
            for (int i = 0; i < static_cast<int>(grid.size()); i++) {
                if (grid[i]->getType() == 'C') {
                    // Move all characters
                    Character* character = static_cast<Character*>(grid[i]);
                    character->move(1, 0);
                    auto character_pos = character->getPos();

                    // Check if any character is within a certain distance of a trap
                    for (int j = 0; j < static_cast<int>(grid.size()); j++) {
                        if (grid[j]->getType() == 'T') {
                            Trap* trap = static_cast<Trap*>(grid[j]);
                            auto trap_pos = trap->getPos();
                            double distance = Utils::calculateDistance(character_pos, trap_pos);

                            if (distance <= trapActivationDistance) {
                                trap->apply(*character);
                            }
                        }
                    }

                    // Check if the character has won the game
                    int x = std::get<0>(character_pos);
                    int y = std::get<1>(character_pos);
                    if (x >= gridWidth || y >= gridHeight || x < 0 || y < 0) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }
           


        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

    ~Game() {
        for (auto entity : grid) {
            delete entity;
        }
    }
};

#endif // GAME_H

// loi
/*All files found, +1 marks.
Successfully compiled program.out with files main-3.cpp. +2 marks
Successfully compiled program.out with files test-3-1.cpp. +2 marks
Program exit status != 0 (program returned POSIX status code 6): abnormal termination of program (possibly a segmentation fault or timeout)*/