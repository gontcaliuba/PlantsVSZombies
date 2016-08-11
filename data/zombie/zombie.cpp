#include "zombie.h"

Zombie::Zombie(const Complexity &complexityOfLevel, const Position &position, const Health_Points &hp)
    : AliveActor(position, hp*complexityOfLevel.getZombieLifesCoeff())
{
}

Zombie::~Zombie()
{

}

ActorType Zombie::getType() const
{
    return ZOMBIE;
}

