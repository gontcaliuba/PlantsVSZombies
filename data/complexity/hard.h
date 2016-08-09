#ifndef HARD_H
#define HARD_H

#include "complexity.h"

class Hard : public Complexity
{
public:
    Hard();
    virtual ~Hard();

    virtual Zombie_Power_Coeff getZombieLifesCoeff();
};

#endif // HARD_H
