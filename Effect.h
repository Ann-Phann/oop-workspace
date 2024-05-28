#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"
#include <iostream>

class Effect : public GameEntity {
    private:
        virtual void apply(GameEntity *entity);
};

#endif // EFFECT_H