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
public:
    Goal();
    virtual ~Goal();

    virtual GoalsMessage &getGoalsMessage() const = 0;
    virtual GoalState getState(const GoalsConditions &presentConditions) const = 0;
};

#endif // GOAL_H
