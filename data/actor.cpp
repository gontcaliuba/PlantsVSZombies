#include "actor.h"

Actor::Actor(const Position &position)
    : position(position)
{
}

Actor::~Actor()
{
}

const Position &Actor::getPosition() const
{
    return position;
}

void Actor::setPosition(Position newPosition)
{
    position.setPhysicPosition(newPosition);
}
