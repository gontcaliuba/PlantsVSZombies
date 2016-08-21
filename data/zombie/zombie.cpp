#include "zombie.h"

Zombie::Zombie(const Complexity &complexityOfLevel, const Position &position, const HP &hp)
    : AliveActor(position,
                 HP(hp.getHP() * complexityOfLevel.getZombieLifesCoeff())),
      complexityOfLevel(complexityOfLevel)
{
}

Zombie::~Zombie()
{

}

ActorType Zombie::getType() const
{
    return ZOMBIE;
}

const Complexity &Zombie::getComplexity() const
{
    return complexityOfLevel;
}

void Zombie::move()
{
    setPosition(Position(getPosition().getPhysicX() - 1, getPosition().getPhysicY()));
}

