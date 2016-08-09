#include "logicposition.h"

LogicPosition::LogicPosition()
    : x(0), y(0)
{
}

LogicPosition::LogicPosition(Logic_Coordinate x, Logic_Coordinate y)
    : x(x), y(y)
{
}

void LogicPosition::setX(Logic_Coordinate x)
{
    this->x = x;
}

void LogicPosition::setY(Logic_Coordinate y)
{
    this->y = y;
}

Logic_Coordinate LogicPosition::getX() const
{
    return x;
}

Logic_Coordinate LogicPosition::getY() const
{
    return y;
}

