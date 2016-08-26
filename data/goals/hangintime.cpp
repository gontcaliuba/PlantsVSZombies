#include "hangintime.h"

HangInTime::HangInTime(Millisecond timeToHang)
    : Goal(),
      timeToHang(timeToHang)
{
}

HangInTime::~HangInTime()
{

}

GoalsMessage &HangInTime::getGoalsMessage() const
{

}

GoalState HangInTime::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if (presentConditions.elapsedTime >= timeToHang) return Reached;
    else return NotReached;
}

