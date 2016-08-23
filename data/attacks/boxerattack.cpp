#include "boxerattack.h"

BoxerAttack::BoxerAttack(const Position &position, Actor &attacked)
    : Attack(position, 5, 0, attacked)
{
}

BoxerAttack::~BoxerAttack()
{

}

