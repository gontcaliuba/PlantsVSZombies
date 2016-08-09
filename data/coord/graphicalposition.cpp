#include "graphicalposition.h"

GraphicalPosition::GraphicalPosition()
    : x(0), y(0)
{
}

GraphicalPosition::GraphicalPosition(Grapfical_Coordinate x, Grapfical_Coordinate y)
    : x(x), y(y)
{
}

void GraphicalPosition::setX(Grapfical_Coordinate x)
{
    this->x = x;
}

void GraphicalPosition::setY(Grapfical_Coordinate y)
{
    this->y = y;
}

Grapfical_Coordinate GraphicalPosition::getX() const
{
    return x;
}

Grapfical_Coordinate GraphicalPosition::getY() const
{
    return y;
}

