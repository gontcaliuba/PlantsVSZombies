#include "cabbageattack.h"

CabbageAttack::CabbageAttack(const Position &position, Actor &attacked)
    : Attack(position, 10, 1, attacked)
{
}

CabbageAttack::~CabbageAttack()
{

}

