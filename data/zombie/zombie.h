#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "data/aliveactor.h"
#include "data/coord/position.h"
#include "data/complexity/complexity.h"
#include "data/plants/plant.h"

class Zombie : public AliveActor
{
public:
    Zombie(const Complexity &complexityOfLevel, const Position &position, const Health_Points &hp);
    virtual ~Zombie();

    virtual ActorType getType() const;
    virtual bool canMove() const = 0;
    virtual void move() = 0;
    virtual void generateAttack(Actor &attacked) const = 0;
    virtual void reloading() const = 0;
};

#endif // ZOMBIE_H
