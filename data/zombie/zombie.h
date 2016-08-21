#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "data/aliveactor.h"
#include "data/coord/position.h"
#include "data/complexity/complexity.h"
#include "data/plants/plant.h"

class Zombie : public AliveActor
{
    const Complexity &complexityOfLevel;

public:
    Zombie(const Complexity &complexityOfLevel, const Position &position, const HP &hp);
    virtual ~Zombie();

    virtual ActorType getType() const;

    virtual void move();
    const Complexity& getComplexity() const;
};

#endif // ZOMBIE_H
