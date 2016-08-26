#include "collectsuns.h"

CollectSuns::CollectSuns(Sun_Point needToCollect)
    : Goal(),
      needToCollect(needToCollect)
{
}

CollectSuns::~CollectSuns()
{

}

GoalsMessage &CollectSuns::getGoalsMessage() const
{

}

GoalState CollectSuns::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if (presentConditions.collectedSuns >= needToCollect) return Reached;
    else return NotReached;
}

