#ifndef ACTOR_H
#define ACTOR_H

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
public:
    Actor();
    virtual ~Actor();

    virtual void draw() const = 0;
    virtual void sound() const = 0;
    virtual Actor * copy() const = 0;
    virtual ActorType getType() const = 0;
    virtual bool needToDestroy() const = 0;
};


#endif // ACTOR_H
