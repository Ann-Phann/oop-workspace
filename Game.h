#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"

class Game 
{
private:
    std::vector<GameEntity*> entities;
    int gridWidth;
    int gridHeight;

public:
    

// get set method
    std::vector<GameEntity*>& get_entities()
    {
        return entities;
    }

    void set_entities(std::vector<GameEntity*>& new_entities)
    {
        this->entities = new_entities;
    }

// functions
    /*std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight): This method should create 
    the specified number of Ship and Mine objects with random positions within the grid dimensions using the Utils::generateRandomPos method. 
    The created objects should be stored in the entities vector, and the method should return the entities vector.*/
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight)
    {
        //initialize the grid width and height
        this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;

        //initialize ships with random positions
        for (int i = 0; i < numShips; i++)
        {
            std::tuple <int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity* ship = new Ship(std::get<0>(position), std::get<1>(position));
            entities.push_back(ship);
        }

        //initialize mines with random positions
        for (int j = 0; j < numMines; j++)
        {
            std::tuple <int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            GameEntity* mine = new Mine(std::get<0>(position), std::get<1>(position));
            entities.push_back(mine);
        }

        return entities;

    }

    /*void gameLoop(int maxIterations, double mineDistanceThreshold): This function simulates the game. In each iteration, 
    it should perform the following steps:

    1. Call move(1, 0) for all Ship objects in entities.
    2. Check if any Ship object is within a certain distance (mineDistanceThreshold) of a Mine object. If a Ship is found within the threshold, 
    call explode() for the corresponding Mine.
    3.The function should terminate when either all Ship objects are destroyed or the number of iterations reaches maxIterations.*/

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; iteration++) {
            for (int i = 0; i < static_cast<int>(entities.size()); i++) {
                if (entities[i]->getType() == 'S') {
                    //move all ships
                    Ship* ship = static_cast<Ship*>(entities[i]);
                    ship->move(1, 0);
                    std::tuple<int, int> ship_pos = ship->getPos();

                    //check if any ship is within a certain distance of a mine
                    for (int j = 0; j < static_cast<int>(entities.size()); j++) {
                        if (entities[j]->getType() == 'M') {
                            Mine* mine = static_cast<Mine*>(entities[j]);
                            std::tuple<int, int> mine_pos = mine->getPos();
                            double distance = Utils::calculateDistance(ship_pos, mine_pos);

                            if (distance <= mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                explosion.apply(*ship);
                                
                            }
                        }
                    }
                }
            }
            
            //check if ships are destroyed
            bool allShipsDestroyed = true;
            for (auto entity : entities) {
                if (entity->getType() == 'S') {
                    Ship* ship = static_cast<Ship*>(entity);
                    if (ship->getType() != 'X') { // 'X' means the ship is destroyed
                        allShipsDestroyed = false;
                        break;
                    }
                }
            }

            if (allShipsDestroyed) {
                std::cout << "All ships are destroyed. Game over." << std::endl;
                return;
            }
        }
        std::cout << "Maximum iterations reached. Game over." << std::endl;
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }
    
};
#endif