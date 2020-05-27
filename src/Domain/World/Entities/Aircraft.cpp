#include "Domain/World/Entities/Aircraft.h"

Textures::ID toTextureId(Aircraft::Type type) {
    switch (type) {
        case Aircraft::Eagle:
            return Textures::Eagle;
        case Aircraft::Raptor:
            return Textures::Raptor;
    }
}

Aircraft::Aircraft(Type type, TextureHolder &textures) : mType(type), mSprite(toTextureId(type)) {}

void Aircraft::drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(mSprite, states);
}