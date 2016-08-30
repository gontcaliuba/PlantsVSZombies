#include "zombiesattack.h"

ZombiesAttack::ZombiesAttack(const Position &position, const QList<Actor*> &attacked)
    : Attack(position, 10, attacked)
{
}

ZombiesAttack::~ZombiesAttack()
{

}

void ZombiesAttack::attack()
{

}

void ZombiesAttack::move()
{

}
