#include "hangintime.h"

HangInTime::HangInTime(GoalsMessage goalsTxt, Millisecond timeToHang)
    : Goal(goalsTxt),
      timeToHang(timeToHang)
{
}

HangInTime::~HangInTime()
{

}

GoalState HangInTime::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if(presentConditions.elapsedTime == timeToHang) return Reached;
    else return NotReached;
}

