#include "zombie.h"

Zombie::Zombie(const Complexity &complexityOfLevel, const Position &position, const HP &hp)
    : AliveActor(position,
                 HP(hp.getHP() * complexityOfLevel.getZombieLifesCoeff()))
{
}

Zombie::~Zombie()
{

}

ActorType Zombie::getType() const
{
    return ZOMBIE;
}

