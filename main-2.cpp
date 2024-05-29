#include <iostream>
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"

int main() {
    Mine myMine(4, 5);
    Explosion myExplosion = myMine.explode();

    std::cout << "Explosion Position: (" 
              << std::get<0>(myExplosion.getPos()) 
              << ", " << std::get<1>(myExplosion.getPos()) 
              << ")\n";
    std::cout << "Explosion Type: " 
              << myExplosion.getType() 
              << "\n";

    return 0;
}
