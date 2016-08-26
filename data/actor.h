#ifndef ACTOR_H
#define ACTOR_H

#include <Qt>
#include "data/coord/position.h"

enum ActorType
{
    GROUND,
    BACKGROUND,
    PLANT,
    ZOMBIE,
    ATTACK
};

class Actor
{
    Position position;

public:
    Actor(const Position &position);
    virtual ~Actor();

    virtual void draw() const = 0;
    virtual void sound() const = 0;
    virtual Actor * copy() const = 0;
    virtual ActorType getType() const = 0;
    virtual bool needToDestroy() const = 0;
    const Position &getPosition() const;
    void setPosition(Position newPosition); //!! передача по ссылке
};


#endif // ACTOR_H
