#include "zombiesattack.h"

ZombiesAttack::ZombiesAttack(const Position &position, Actor &attacked)
    : Attack(position, 10, 0, attacked)
{
}

ZombiesAttack::~ZombiesAttack()
{

}
