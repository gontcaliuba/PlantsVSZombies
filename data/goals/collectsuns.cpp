#include "collectsuns.h"

CollectSuns::CollectSuns(GoalsMessage goalsTxt, Sun_Point needToCollect)
    : Goal(goalsTxt),
      needToCollect(needToCollect)
{
}

CollectSuns::~CollectSuns()
{

}

GoalState CollectSuns::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if(presentConditions.collectedSuns == needToCollect) return Reached;
    else return NotReached;
}

