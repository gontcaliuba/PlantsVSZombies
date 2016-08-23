#ifndef HANGINTIME_H
#define HANGINTIME_H

#include "data/goals/goal.h"

class HangInTime : public Goal
{
    Millisecond timeToHang;

public:
    HangInTime(GoalsMessage goalsTxt, Millisecond timeToHang);
    virtual ~HangInTime();

    virtual GoalState getState(const GoalsConditions &presentConditions) const;
};

#endif // HANGINTIME_H
