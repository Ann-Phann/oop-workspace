#include <iostream>
#include "Musician.h"
#include "Orchestra.h"
using namespace std;

Orchestra :: Orchestra()
{
    max_size = 0;
    current_size = 0;
    member = nullptr;
}

Orchestra :: Orchestra(int size)
{
    max_size = size;
    current_size = 0;
    member = new Musician[max_size];
}

int Orchestra :: get_current_number_of_members()
{
    return current_size;
}

bool Orchestra :: has_instrument(string instrument)
{
    for (int i = 0; i < current_size; i++)
    {
        if (member[i].get_instrument() != instrument)
        {
            return false;
        }
    }
    return true;
}

Musician* Orchestra :: get_members()
{
    return member;
}

bool Orchestra:: add_musician(Musician new_musician)
{
    if (current_size < max_size)
    {
        member[current_size] = new_musician;
        current_size++;
        return true;
    }
    return false;
}

Orchestra :: ~Orchestra()
{
    delete [] member;
}