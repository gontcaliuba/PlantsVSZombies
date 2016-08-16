#ifndef HP_H
#define HP_H

#include "data/defines.h"

class HP
{
    Health_Points health;

public:
    HP();
    explicit HP(Health_Points health);
    Health_Points getHP() const;
    void setHP(Health_Points health);
    bool isAlive();
    bool isDead();
    void reduceHealth(Health_Points health);

};

#endif // HP_H
