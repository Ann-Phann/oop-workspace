#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <algorithm>
#include "Cell.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

class Game {
private:
    std::vector<Cell*> cells;
    int gridWidth;
    int gridHeight;

public:
    std::vector<Cell*>& get_cells() {
        return cells;
    }

    void set_cells(const std::vector<Cell*>& new_cells) {
        this->cells = new_cells;
    }

    std::vector<Cell*> initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;
        cells.clear();

        for (int i = 0; i < numCharacters; i++) {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* character = new Character(std::get<0>(position), std::get<1>(position));
            cells.push_back(character);
        }

        for (int j = 0; j < numTraps; j++) {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            Cell* trap = new Trap(std::get<0>(position), std::get<1>(position));
            cells.push_back(trap);
        }

        return cells;
    }

    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int iteration = 0; iteration < maxIterations; iteration++) {
            for (int i = 0; i < static_cast<int>(cells.size()); i++) {
                if (cells[i]->getType() == 'C') {
                    Character* character = static_cast<Character*>(cells[i]);
                    character->move(1, 0);
                    std::tuple<int, int> char_pos = character->getPos();

                    for (int j = 0; j < static_cast<int>(cells.size()); j++) {
                        if (cells[j]->getType() == 'T') {
                            Trap* trap = static_cast<Trap*>(cells[j]);
                            std::tuple<int, int> trap_pos = trap->getPos();
                            double distance = Utils::calculateDistance(char_pos, trap_pos);

                            if (distance <= trapActivationDistance) {
                                trap->apply(*character);
                            }
                        }
                    }

                    if (std::get<0>(char_pos) >= gridWidth || std::get<1>(char_pos) >= gridHeight) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }
        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

    ~Game() {
        for (auto cell : cells) {
            delete cell;
        }
    }
};

#endif // GAME_H
