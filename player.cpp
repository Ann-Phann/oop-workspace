#include <iostream>
#include "player.h"
using namespace std;

Player :: Player(string p_name, int p_health, int p_damage)
{
    name = p_name;
    health = p_health;
    damage = p_damage;
}

void Player :: attack (Player* opponent, int damage)
{

    opponent->takeDamage(damage);

}

void Player :: takeDamage(int damage)
{
    health = health - damage;
    cout << name << " takes " << damage <<" damage. Remaining health: " << health <<endl;
}
int Player :: getHealth()
{
    return health;
}

string Player:: getName()
{
    return name;
}

int Player :: getDamage()
{
    return damage;
}

void Player :: setter_method(string name_of_player, int health_of_player, int damage_of_player)
{
    name = name_of_player;
    health = health_of_player;
    damage = damage_of_player;
}

void Player :: setter_damage(int player_damage)
{
    damage = player_damage;
}

Player :: Player()
{
    name = " none";
    health = 0;
    damage = 0;
}