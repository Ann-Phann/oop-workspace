#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cmath>

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight)
    {
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
        return std::make_tuple(x, y);
    
    }

    static double calculateDistance(std::tuple<int, int> pos1, 
                            std::tuple<int, int> pos2)
    {
        int dis1 = pow(std::get<0>(pos1) - std::get<0>(pos2), 2);
        int dis2 = pow(std::get<1>(pos1) - std::get<1>(pos2), 2);
        return sqrt(dis1 + dis2);
    }
};


#endif // UTILS_H
