#include "Infrastructure/GameEntity.h"

#ifndef SFML_GAME_BOILERPLATE_AIRCRAFT_H
#define SFML_GAME_BOILERPLATE_AIRCRAFT_H

class Aircraft : public GameEntity {
public:
    enum Type {
        Eagle,
        Raptor,
    };

public:
    explicit Aircraft(Type type);

private:
    Type mType;
};

#endif //SFML_GAME_BOILERPLATE_AIRCRAFT_H
