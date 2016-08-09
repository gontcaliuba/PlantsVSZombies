#ifndef COMPLEXITY_H
#define COMPLEXITY_H

#include "data/defines.h"

class Complexity
{
public:
    Complexity();
    virtual ~Complexity();

    virtual Zombie_Power_Coeff getZombieLifesCoeff() const = 0;
};

#endif // COMPLEXITY_H
