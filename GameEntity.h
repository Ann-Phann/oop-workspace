#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

/**
 * @class GameEntity
 * @brief Represents an entity in the game with a position and type.
 */
class GameEntity
{
    private:
        std::tuple<int, int> position; ///< The position of the entity (x, y).
        char type; ///< The type of the entity.
    
    public:
        /**
         * @brief Constructor to initialize the GameEntity with a position and type.
         * @param x The x-coordinate of the position.
         * @param y The y-coordinate of the position.
         * @param type The type of the entity.
         */
        GameEntity(int x, int y, char type) {
            this->position = std::make_tuple(x, y);
            this->type = type;
        }

        virtual ~GameEntity() {}

        /**
         * @brief Gets the position of the entity.
         * @return A tuple representing the position (x, y).
         */
        std::tuple<int, int> getPos() {
            return position;
        }

        void setPos(int x, int y) {
            this->position = std::make_tuple(x, y);
        }

        /**
         * @brief Gets the type of the entity.
         * @return The type of the entity.
         */
        char getType() {
            return type;
        }

        /**
         * @brief Sets the type of the entity.
         * @param type The new type of the entity.
         */
        void setType(char type) {
            this->type = type;
        }

   

};

#endif // GAMEENTITY_H
