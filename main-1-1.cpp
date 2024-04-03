//players can choose to be either a wizard or a warrior and engage in a battle. a wizard object can use magic spells to deal damage, while a warrior object can use their weapon to deal damage.

#include <iostream>
#include "player.h"
#include "warrior.h"
#include "wizard.h"
using namespace std;

int main (void)
{
    // wizard: name health damage mana
    Wizard wizard("An", 100, 20, 50);

    //warrior: name health damage weapon
    Warrior warrior ("Anh", 120, 25, "Sword");

    cout << "Let's battle begin" << endl;

    // while both still alive, wizard cast spell first --> 
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0)
    {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() > 0)
        {
            warrior.swingWeapon(&wizard);
        }
    }

    // if who still have blood --> winner
    if (wizard.getHealth() > 0)
    {
        cout << wizard.getName() << " is winner" << endl;
    } else{
        cout << warrior.getName() << " is winner" << endl;
    }

}