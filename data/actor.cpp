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

void Actor::setPosition(Physic_Coordinate x, Physic_Coordinate y)
{
    position.setPhysicPosition(x, y);
}
