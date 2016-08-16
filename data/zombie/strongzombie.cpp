#include "strongzombie.h"

StrongZombie::StrongZombie(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(70))
{
}

StrongZombie::~StrongZombie()
{

}

