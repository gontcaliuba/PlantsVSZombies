#include "ground.h"


Ground::Ground(const Position &position)
    : Actor(position)
{
}

Ground::~Ground()
{
}

bool Ground::needToDestroy() const
{
    return false;
}

ActorType Ground::getType() const
{
    return GROUND;
}

void Ground::sound() const
{
}
