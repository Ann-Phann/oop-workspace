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


    }

    void gameLoop(int maxIterations, double mineDistanceThreshold)
    {

    }
};
#endif