#include "goal.h"

Goal::Goal(GoalsMessage goalsTxt)
    : goalsTxt(goalsTxt)
{
}

Goal::~Goal()
{

}

GoalsMessage Goal::getGoalsMessage() const
{
    return goalsTxt;
}

