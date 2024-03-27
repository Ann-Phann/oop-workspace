#include <iostream>
#include "Musician.h"

Musician:: Musician()
{
    instrument = "null";
    experience = 0;
}

Musician:: Musician (string m_instrument, int m_experience)
{
    instrument = m_instrument;
    experience = m_experience;
}

string Musician ::get_instrument()
{
    return instrument;
}

int Musician :: get_experience()
{
    return experience;
}
