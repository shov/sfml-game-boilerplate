/**
 * Aircraft game entity
 */

#ifndef SFML_GAME_BOILERPLATE_AIRCRAFT_H
#define SFML_GAME_BOILERPLATE_AIRCRAFT_H

#include "Infrastructure/GameEntity.h"
#include "Domain/World/Keys.h"

class Aircraft : public GameEntity {
public:
    enum Type {
        Eagle,
        Raptor,
    };

public:
    explicit Aircraft(Type type, TextureHolder &textures);
    virtual void drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const;

private:
    Type mType;
    sf::Sprite mSprite;
};

#endif //SFML_GAME_BOILERPLATE_AIRCRAFT_H
