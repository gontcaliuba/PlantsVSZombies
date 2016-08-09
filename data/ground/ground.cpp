#include "ground.h"


Ground::Ground(const LogicPosition &position)
    : Actor(),
      position(position)
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

const LogicPosition &Ground::getPosition() const
{
    return position;
}
