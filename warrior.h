#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "player.h"

class Warrior : public Player
{
private:
    string weapon;
public:
// deals damage to the opponent based on the player's weapon's damage
    void swingWeapon (Player* opponent);

// other function
    Warrior(string wa_name, int wa_health, int wa_damage, string wa_weapon);
};
#endif