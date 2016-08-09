#include "hp.h"

HP::HP()
    : health(0)
{
}

HP::HP(Health_Points health)
    : health(health)
{
}

Health_Points HP::getHP() const
{
    return health;
}

void HP::setHP(Health_Points health)
{
    this->health = health;
}

bool HP::isAlive()
{
    if (health > 0) return true;
    else return false;
}

bool HP::isDead()
{
    if (health > 0) return false;
    else return true;
}

void HP::reduceHealth(Health_Points health)
{
    this->health -= health;
}

