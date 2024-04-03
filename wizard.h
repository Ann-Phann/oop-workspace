#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include "player.h"

class Wizard : public Player
{
private:
    int mana;

public:
// deals damage to the opponent based on the player's mana points
    void castSpell (Player* opponent);

// other functions
    Wizard(string wi_name, int wi_health, int wi_damage, int wi_mana);
};
#endif