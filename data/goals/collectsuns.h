#ifndef COLLECTSUNS_H
#define COLLECTSUNS_H

#include "data/goals/goal.h"

class CollectSuns : public Goal
{
    Sun_Point needToCollect;

public:
    CollectSuns(Sun_Point needToCollect);
    virtual ~CollectSuns();

    GoalsMessage &getGoalsMessage() const;
    virtual GoalState getState(const GoalsConditions &presentConditions) const;

};

#endif // COLLECTSUNS_H
