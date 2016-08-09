#ifndef GROUND_H
#define GROUND_H

#include "data/defines.h"
#include "data/coord/logicposition.h"
#include "data/actor.h"

class Ground : public Actor
{
    LogicPosition position;

public:
    Ground(const LogicPosition &position);
    virtual ~Ground();

    virtual bool needToDestroy() const;
    virtual Fertility getFertility() const = 0;
    const LogicPosition &getPosition() const;
};

#endif // GROUND_H
