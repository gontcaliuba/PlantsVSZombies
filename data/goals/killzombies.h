#ifndef KILLZOMBIES_H
#define KILLZOMBIES_H

#include "data/goals/goal.h"

class KillZombies : public Goal
{
public:
    KillZombies(GoalsMessage goalsTxt);
    virtual ~KillZombies();

    virtual GoalState getState(const GoalsConditions &presentConditions) const;
};

#endif // KILLZOMBIES_H
