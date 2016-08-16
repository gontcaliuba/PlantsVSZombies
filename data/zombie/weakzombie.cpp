#include "weakzombie.h"


WeakZombie::WeakZombie(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(30))
{
}

WeakZombie::~WeakZombie()
{

}

