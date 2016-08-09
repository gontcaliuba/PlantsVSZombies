#ifndef EASY_H
#define EASY_H

#include "complexity.h"

class Easy : public Complexity
{
public:
    Easy();
    virtual ~Easy();

    virtual Zombie_Power_Coeff getZombieLifesCoeff();
};

#endif // EASY_H
