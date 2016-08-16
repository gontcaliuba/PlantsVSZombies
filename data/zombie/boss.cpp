#include "boss.h"

Boss::Boss(const Complexity &complexityOfLevel, const Position &position)
    : Zombie(complexityOfLevel, position, HP(300))
{
}

Boss::~Boss()
{

}

