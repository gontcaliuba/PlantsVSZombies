#ifndef GOAL_H
#define GOAL_H

#include "data/defines.h"

enum GoalState
{
    Reached,
    NotReached,
    Failed
};

class Goal
{
protected:
    GoalsMessage goalsTxt;

public:
    Goal(GoalsMessage goalsTxt);
    virtual ~Goal();

    GoalsMessage getGoalsMessage() const;
    virtual GoalState getState(const GoalsConditions &presentConditions) const = 0;
};

#endif // GOAL_H
