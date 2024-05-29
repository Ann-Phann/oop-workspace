#ifndef EXPLOISION_H
#define EXPLOISION_H

#include "Effect.h"
#include "GameEntity.h"


class Exploision : public GameEntity, public Effect {

    public:
        Exploision(int x, int y, char type) : GameEntity(x, y, 'E'),  {
        }
        void apply(GameEntity& entity) {
            entity.setType('X');
            entity.setPos(-1, -1);
           
        }

};

#endif // EXPLOISION_H