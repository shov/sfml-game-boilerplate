#include <SFML/System/Vector2.hpp>

#ifndef SFML_GAME_BOILERPLATE_GAMEENTITY_H
#define SFML_GAME_BOILERPLATE_GAMEENTITY_H

/**
 * Base class for all game entities that has graphical representation or at least a movement
 */
class GameEntity {
public:
    /**
     * Set velocity using vector
     * @param velocity
     */
    void setVelocity(sf::Vector2f velocity);

    /**
     * Set velocity using relative coords
     * @param vx
     * @param vy
     */
    void setVelocity(float vx, float vy);

    /**
     * Get velocity, Vector2 is going to be initialized with zeros by default
     * @return
     */
    sf::Vector2f getVelocity() const;

private:
    sf::Vector2f mVelocity;
};


#endif //SFML_GAME_BOILERPLATE_GAMEENTITY_H
