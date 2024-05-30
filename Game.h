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
    std::vector<Cell*> entities;
    int gridWidth;
    int gridHeight;

public:
    Game() {
        std::srand(static_cast<unsigned int>(std::time(0))); // Seed for random number generation
    }

    // Getter for entities
    std::vector<Cell*>& get_entities() {
        return entities;
    }

    // Setter for entities
    void set_entities(const std::vector<Cell*>& new_entities) {
        this->entities = new_entities;
    }

    // Initializes the game with specified numbers of characters and traps
    std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;

        // Clear existing entities
        entities.clear();

        // Initialize characters with random positions
        for (int i = 0; i < numCharacters; i++) {
            auto position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* character = new Character(std::get<0>(position), std::get<1>(position));
            entities.push_back(character);
        }

        // Initialize traps with random positions
        for (int j = 0; j < numTraps; j++) {
            auto position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* trap = new Trap(std::get<0>(position), std::get<1>(position));
            entities.push_back(trap);
        }

        return entities;
    }

    // Simulates the game
    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int iteration = 0; iteration < maxIterations; iteration++) {
            for (int i = 0; i < static_cast<int>(entities.size()); i++) {
                if (entities[i]->getType() == 'C') {
                    // Move all characters
                    Character* character = static_cast<Character*>(entities[i]);
                    character->move(1, 0);
                    auto character_pos = character->getPos();

                    // Check if any character is within a certain distance of a trap
                    for (int j = 0; j < static_cast<int>(entities.size()); j++) {
                        if (entities[j]->getType() == 'T') {
                            Trap* trap = static_cast<Trap*>(entities[j]);
                            auto trap_pos = trap->getPos();
                            double distance = Utils::calculateDistance(character_pos, trap_pos);

                            if (distance <= trapActivationDistance) {
                                trap->apply(*character);
                            }
                        }
                    }

                    // Check if the character has won the game
                    auto [x, y] = character->getPos();
                    if (x >= gridWidth || y >= gridHeight || x < 0 || y < 0) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }

            // Check if all characters are destroyed
            bool allCharactersDestroyed = std::all_of(entities.begin(), entities.end(), [](Cell* entity) {
                if (entity->getType() == 'C') {
                    Character* character = static_cast<Character*>(entity);
                    return character->getType() == 'X'; // 'X' means the character is destroyed
                }
                return true;
            });

            if (allCharactersDestroyed) {
                std::cout << "All characters are destroyed. Game over." << std::endl;
                return;
            }
        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H