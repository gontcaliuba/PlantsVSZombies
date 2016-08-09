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

const LogicPosition &Ground::getPosition() const
{
    return position;
}
