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
