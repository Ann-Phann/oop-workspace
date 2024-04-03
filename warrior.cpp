#include <iostream>
#include "player.h"
#include "warrior.h"
using namespace std;

void Warrior :: swingWeapon (Player* opponent)
{
    opponent->takeDamage(getDamage());
    cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

Warrior :: Warrior(string wa_name, int wa_health, int wa_damage, string wa_weapon)
{
    setter_method(wa_name, wa_health, wa_damage);
    weapon = wa_weapon;
}