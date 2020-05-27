/**
 * Common keys definitions
 */

#ifndef SFML_GAME_BOILERPLATE_KEYS_H
#define SFML_GAME_BOILERPLATE_KEYS_H

#include "Infrastructure/ResourceHolder.h"
#include <SFML/Graphics.hpp>

namespace Textures {
    enum ID {
        Eagle,
        Raptor,
    };
}

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

#endif //SFML_GAME_BOILERPLATE_KEYS_H
