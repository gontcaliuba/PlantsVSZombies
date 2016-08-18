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
    GoalsMessage goalsTxt;

public:
    Goal();
    virtual ~Goal();

    virtual GoalState getState() const = 0;
};

#endif // GOAL_H
