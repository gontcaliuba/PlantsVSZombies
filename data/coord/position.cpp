#include "position.h"

Position::Position()
    : x(0), y(0)
{ 
}

Position::Position(Physic_Coordinate x, Physic_Coordinate y)
    : x(x), y(y)
{
}

Position::Position(Logic_Coordinate x, Logic_Coordinate y)
    : x(x), y(y)
{
}

Logic_Coordinate Position::getLogicX() const
{
    return Logic_Coordinate(x);
}

Logic_Coordinate Position::getLogicY() const
{
    return Logic_Coordinate(y);
}

Physic_Coordinate Position::getPhysicX() const
{
    return x;
}

Physic_Coordinate Position::getPhysicY() const
{
    return y;
}

Graphical_Coordinate Position::getGraphicalX(float offsetX, float cellSizeX) const
{
    return offsetX + x*cellSizeX;
}

Graphical_Coordinate Position::getGraphicalY(float offsetY, float cellSizeY) const
{
    return offsetY + y*cellSizeY;
}

void Position::setLogicPosition(Logic_Coordinate x, Logic_Coordinate y)
{
    this->x = x;
    this->y = y;
}

void Position::setPhysicPosition(Physic_Coordinate x, Physic_Coordinate y)
{
    this->x = x;
    this->y = y;
}

void Position::setLogicPosition(Position newPosition)
{
    this->x = newPosition.getLogicX();
    this->y = newPosition.getLogicY();
}

void Position::setPhysicPosition(Position newPosition)
{
    this->x = newPosition.getPhysicX();
    this->y = newPosition.getPhysicY();
}

