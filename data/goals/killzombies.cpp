#include "killzombies.h"

KillZombies::KillZombies()
    : Goal()
{
}

KillZombies::~KillZombies()
{

}

GoalsMessage &KillZombies::getGoalsMessage() const
{

}

GoalState KillZombies::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if (presentConditions.allZombiesDead == true) return Reached;
    else return NotReached;
}

