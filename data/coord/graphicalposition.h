#ifndef GRAPHICALPOSITION_H
#define GRAPHICALPOSITION_H

#include "data/defines.h"


class GraphicalPosition
{
private:
    Grapfical_Coordinate x;
    Grapfical_Coordinate y;

public:
    GraphicalPosition();
    GraphicalPosition(Grapfical_Coordinate x, Grapfical_Coordinate y);

    void setX(Grapfical_Coordinate x);
    void setY(Grapfical_Coordinate y);
    Grapfical_Coordinate getX() const;
    Grapfical_Coordinate getY() const;
};

#endif // GRAPHICALPOSITION_H
