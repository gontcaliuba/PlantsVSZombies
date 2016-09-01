#include "cabbageattack.h"

CabbageAttack::CabbageAttack(const Position &position, Actor *attacked)
    : Attack(position),
    Vx(4), a(0.3)
{
    this->attacked = dynamic_cast<AliveActor*> (attacked);
    init();
}

CabbageAttack::~CabbageAttack()
{

}

void CabbageAttack::draw() const
{

}

void CabbageAttack::sound() const
{

}

Actor *CabbageAttack::copy() const
{
    return new CabbageAttack(getPosition(), attacked);
}

CabbageAttack::getDamage() const
{
    return 10;
}

void CabbageAttack::attack()
{
    if (attacked == 0) return;

    attacked->takeDamage(getDamage());
    isActive = false;
}

void CabbageAttack::move()
{

}

Physic_Coordinate CabbageAttack::getXn(Millisecond timeInMoment) const
{
    return (getPosition().getPhysicX() + Vx * timeInMoment * 0.001); //время в секундах
}

Physic_Coordinate CabbageAttack::getYn(Millisecond timeInMoment) const
{
    return (getPosition().getPhysicY() + Vy * timeInMoment * 0.001);
}

void CabbageAttack::init()
{
    Physic_Coordinate X1 = getPosition().getPhysicX();
    Physic_Coordinate Y1 = getPosition().getPhysicY();
    Physic_Coordinate X2 = attacked->getPosition().getPhysicX();
    Physic_Coordinate Y2 = attacked->getPosition().getPhysicY();

    float deltaX = X2 - X1;
    if (deltaX == 0) X2 +=0.001;
    if (deltaX < 0) Vx = -Vx;

    allTime = abs(deltaX / Vx);
    Vy = ((Y2 - Y1) / allTime) + a * allTime;
}

