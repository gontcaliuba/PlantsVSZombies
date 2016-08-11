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
    double integer;
    modf(x, &integer);
    return integer;
}

Logic_Coordinate Position::getLogicY() const
{
    double integer;
    modf(y, &integer);
    return integer;
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
