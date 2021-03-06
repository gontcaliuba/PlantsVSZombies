#ifndef ALIVEACTOR_H
#define ALIVEACTOR_H

#include "data/defines.h"
#include "data/complexity/complexity.h"
#include "data/actor.h"
#include "data/other/hp.h"

class Attack;
class AliveActor : public Actor
{
    HP hp;

public:
    AliveActor(const Position &position, const HP &hp);
    virtual ~AliveActor();

    virtual bool needToDestroy() const;

    const virtual HP& getHP() const;
    virtual void takeDamage(Health_Points damagedHP);
    virtual void generateAttack(QList<Actor*> &attacked) const = 0; //!! функция без параметров и без значения: кто владеет атакой? + pure function
    virtual void Reloading() = 0;
};

#endif // ALIVEACTOR_H
