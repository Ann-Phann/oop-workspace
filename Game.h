#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <algorithm>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"

class Game {
private:
    std::vector<GameEntity*> entities;
    int gridWidth;
    int gridHeight;

public:
    /**
     * @brief Constructor to initialize the Game object.
     */
    Game() : gridWidth(0), gridHeight(0) {}

    /**
     * @brief Destructor to clean up dynamically allocated entities.
     */
    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }

    /**
     * @brief Getter for the game entities.
     * @return A reference to the vector of game entities.
     */
    std::vector<GameEntity*>& get_entities() {
        return entities;
    }

    /**
     * @brief Setter for the game entities.
     * @param new_entities A vector of game entities to set.
     */
    void set_entities(const std::vector<GameEntity*>& new_entities) {
        this->entities = new_entities;
    }

    /**
     * @brief Initializes the game with specified numbers of ships and mines.
     * @param numShips The number of Ship objects to create.
     * @param numMines The number of Mine objects to create.
     * @param gridWidth The width of the grid.
     * @param gridHeight The height of the grid.
     * @return A vector of pointers to the created game entities.
     */
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        // initialize the grid width and height
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;

        // clear existing entities
        entities.clear();

        // initialize ships with random positions
        for (int i = 0; i < numShips; i++) {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity* ship = new Ship(std::get<0>(position), std::get<1>(position));
            entities.push_back(ship);
        }

        // initialize mines with random positions
        for (int j = 0; j < numMines; j++) {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity* mine = new Mine(std::get<0>(position), std::get<1>(position));
            entities.push_back(mine);
        }

        return entities;
    }

    /**
     * @brief Simulates the game loop.
     * @param maxIterations The maximum number of iterations to simulate.
     * @param mineDistanceThreshold The distance threshold to trigger a mine explosion.
     */
    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            std::vector<GameEntity*> shipsToDestroy;

            // Move all ships
            for (auto entity : entities) {
                if (auto ship = dynamic_cast<Ship*>(entity)) {
                    ship->move(1, 0); // Move the ship by (1, 0)
                }
            }

            // Check for proximity to mines
            for (auto entity : entities) {
                if (auto ship = dynamic_cast<Ship*>(entity)) {
                    for (auto otherEntity : entities) {
                        if (auto mine = dynamic_cast<Mine*>(otherEntity)) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                mine->explode();
                                shipsToDestroy.push_back(ship);
                                break;
                            }
                        }
                    }
                }
            }

            // Remove destroyed ships
            for (auto ship : shipsToDestroy) {
                entities.erase(std::remove(entities.begin(), entities.end(), ship), entities.end());
                delete ship;
            }

            // Terminate if all ships are destroyed
            if (std::none_of(entities.begin(), entities.end(), [](GameEntity* entity) { return dynamic_cast<Ship*>(entity) != nullptr; })) {
                break;
            }
        }
    }
};

#endif // GAME_H
