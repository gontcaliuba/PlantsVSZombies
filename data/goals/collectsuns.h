#ifndef COLLECTSUNS_H
#define COLLECTSUNS_H

#include "data/goals/goal.h"

class CollectSuns : public Goal
{
    Sun_Point needToCollect;

public:
    CollectSuns();
};

#endif // COLLECTSUNS_H
