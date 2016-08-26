#ifndef HANGINTIME_H
#define HANGINTIME_H

#include "data/goals/goal.h"

class HangInTime : public Goal
{
    Millisecond timeToHang;

public:
    HangInTime(Millisecond timeToHang);
    virtual ~HangInTime();

    GoalsMessage &getGoalsMessage() const;
    virtual GoalState getState(const GoalsConditions &presentConditions) const;
};

#endif // HANGINTIME_H
