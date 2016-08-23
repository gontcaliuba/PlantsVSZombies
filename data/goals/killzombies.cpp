#include "killzombies.h"

KillZombies::KillZombies(GoalsMessage goalsTxt)
    : Goal(goalsTxt)
{
}

KillZombies::~KillZombies()
{

}

GoalState KillZombies::getState(const GoalsConditions &presentConditions) const
{
    if (presentConditions.isZombieAfterBorder == true) return Failed;
    else if(presentConditions.allZombiesDead == true) return Reached;
    else return NotReached;
}

