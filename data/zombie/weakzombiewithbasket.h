#ifndef WEAKZOMBIEWITHBASKET_H
#define WEAKZOMBIEWITHBASKET_H

#include "data/zombie/zombie.h"

class WeakZombieWithBasket : public Zombie
{
public:
    WeakZombieWithBasket(const Complexity &complexityOfLevel, const Position &position);
    virtual ~WeakZombieWithBasket();

    virtual void draw() const;
    virtual void sound() const;
    virtual Actor * copy() const;

    virtual void generateAttack(QList<Actor*> &attacked) const;
    virtual void Reloading();
};

#endif // WEAKZOMBIEWITHBASKET_H
