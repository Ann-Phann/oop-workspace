<<<<<<< HEAD
int main (void) 
{
=======
#include <iostream>

#include "Effect.h"
#include "GameEntity.h"

int main()
{
    GameEntity entity;
    Effect effect;

    std::cout << "Entity type: " << entity.getType() << std::endl;
    std::cout << "Effect type: " << effect.getType() << std::endl;
    // random position and calculate position between them
    std::tuple<int, int> pos1 = entity.getPos();
    std::tuple<int, int> pos2 = effect.getPos();
    int x = std::get<0>(pos1) - std::get<0>(pos2);
    int y = std::get<1>(pos1) - std::get<1>(pos2);
    std::cout << "Distance between entity and effect: " << x << ", " << y << std::endl;

>>>>>>> e590af530a98fc7835209fc747245402ea411256
    return 0;
}