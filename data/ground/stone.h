#ifndef STONE_H
#define STONE_H

#include "ground.h"
#include "data/coord/position.h"

class Stone : public Ground
{
public:
    Stone(const Position &position);
    virtual ~Stone();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;
};

#endif // STONE_H
