#ifndef CABBAGEATTACK_H
#define CABBAGEATTACK_H

#include<cmath>
#include "data/attacks/attack.h"

class CabbageAttack : public Attack
{
    AliveActor *attacked;
    double Vx;
    double a;
    double allTime;
    double Vy;

public:
    CabbageAttack(const Position &position, Actor *attacked);
    virtual ~CabbageAttack();

    virtual getDamage() const;
    virtual void attack();
    virtual void move();
    Physic_Coordinate getXn(Millisecond timeInMoment) const;
    Physic_Coordinate getYn(Millisecond timeInMoment) const;
    void init();
};

#endif // CABBAGEATTACK_H
