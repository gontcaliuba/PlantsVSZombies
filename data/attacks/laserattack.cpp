#include "laserattack.h"

LaserAttack::LaserAttack(const Position &position, Actor &attacked)
    : Attack(position, 15, 0, attacked)
{
}

LaserAttack::~LaserAttack()
{

}

