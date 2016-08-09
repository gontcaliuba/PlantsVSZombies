#ifndef NORMAL_H
#define NORMAL_H

#include "complexity.h"

class Normal : public Complexity
{
public:
    Normal();
    virtual ~Normal();

    virtual Zombie_Power_Coeff getZombieLifesCoeff();
};

#endif // NORMAL_H
