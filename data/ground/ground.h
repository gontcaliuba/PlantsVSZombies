#ifndef GROUND_H
#define GROUND_H

#include "data/defines.h"
#include "data/actor.h"
#include "data/coord/position.h"

class Ground : public Actor
{
public:
    Ground(const Position &position);
    virtual ~Ground();

    virtual bool needToDestroy() const;
    virtual ActorType getType() const;
    virtual void sound() const;

    virtual Fertility getFertility() const = 0;
    virtual Plant_Power plantsPower() const = 0;
};

#endif // GROUND_H
