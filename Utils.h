#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cmath>

class Utils
{
public:
    std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight)
    {
        int x = rand() % gridWidth;
        int y = rand() % gridWidth;
        return std::make_tuple(x, y);
    }

    //Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.
    double calculateDistance(std::tuple<int, int> pos1, 
                            std::tuple<int, int> pos2)
    {
        int dist1 = pow((std::get<0>(pos2) - std::get<0>(pos1)), 2);
        int dist2 = pow((std::get<1>(pos2) - std::get<1>(pos1)), 2);
        return sqrt(dist1 + dist2);
    }
};
#endif // UTILS_H