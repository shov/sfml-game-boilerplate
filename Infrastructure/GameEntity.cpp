//
// Created by Alexandr Shevchenko on 5/26/20.
//

#include "GameEntity.h"

void GameEntity::setVelocity(sf::Vector2f velocity) {
    mVelocity = velocity;
}

void GameEntity::setVelocity(float vx, float vy) {
    mVelocity.x = vx;
    mVelocity.y = vy;
}

sf::Vector2f GameEntity::getVelocity() const {
    return mVelocity;
}