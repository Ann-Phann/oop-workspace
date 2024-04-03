#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int damage;

public:
// constructor that sets data members to given values
    Player(string p_name, int p_health, int p_damage);

// deals damage to the opponent based on the player's damage points
    void attack (Player* opponent, int damage);

//reduce the player's health by the given amount
    void takeDamage(int damage);

//other function for data members
    int getHealth();
    string getName();
    int getDamage();

    //setter method so that derived class can access to private data
    void setter_method(string name_of_player, int health_of_player, int damage_of_player);
    void setter_damage(int player_damage);

    Player();
};

#endif