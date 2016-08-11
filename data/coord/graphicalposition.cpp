#include "graphicalposition.h"

GraphicalPosition::GraphicalPosition()
    : x(0), y(0)
{
}

GraphicalPosition::GraphicalPosition(Graphical_Coordinate x, Graphical_Coordinate y)
    : x(x), y(y)
{
}

void GraphicalPosition::setX(Graphical_Coordinate x)
{
    this->x = x;
}

void GraphicalPosition::setY(Graphical_Coordinate y)
{
    this->y = y;
}

Graphical_Coordinate GraphicalPosition::getX() const
{
    return x;
}

Graphical_Coordinate GraphicalPosition::getY() const
{
    return y;
}

