#include <iostream>
#include "player.h"
#include "wizard.h"
using namespace std;

void Wizard :: castSpell (Player* opponent)
{
    opponent->takeDamage(mana);
    cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() <<" damage. \n";
}

Wizard :: Wizard(string wi_name, int wi_health, int wi_damage, int wi_mana)
{
    setter_method(wi_name, wi_health, wi_damage);
    mana = wi_mana;
}