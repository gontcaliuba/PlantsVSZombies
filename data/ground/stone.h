#ifndef STONE_H
#define STONE_H

#include "ground.h"

class Stone : public Ground
{
public:
    Stone(const LogicPosition &position);
    virtual ~Stone();

    virtual void draw() const;
    virtual Actor * copy() const;

    virtual Fertility getFertility() const;
    virtual Plant_Power plantsPower() const;
};

#endif // STONE_H
