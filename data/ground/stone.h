#ifndef STONE_H
#define STONE_H

#include "ground.h"


class Stone : public Ground
{
public:
    Stone(const LogicPosition &position);
    virtual ~Stone();

    virtual bool isFertility() const;
    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;
    virtual ActorType getType() const;

    virtual Fertility getFertility() const;
};

#endif // STONE_H
