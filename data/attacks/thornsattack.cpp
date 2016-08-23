#include "thornsattack.h"

ThornsAttack::ThornsAttack(const Position &position, Actor &attacked)
    : Attack(position, 5, 0, attacked)
{
}

ThornsAttack::~ThornsAttack()
{

}

