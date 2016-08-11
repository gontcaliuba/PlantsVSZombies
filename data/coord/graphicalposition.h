#ifndef GRAPHICALPOSITION_H
#define GRAPHICALPOSITION_H

#include "data/defines.h"
#include "data/coord/position.h"


class GraphicalPosition : public Position
{
private:
    Graphical_Coordinate x;
    Graphical_Coordinate y;

public:
    GraphicalPosition();
    GraphicalPosition(Graphical_Coordinate x, Graphical_Coordinate y);

    void setX(Graphical_Coordinate x);
    void setY(Graphical_Coordinate y);
    Graphical_Coordinate getX() const;
    Graphical_Coordinate getY() const;
};

#endif // GRAPHICALPOSITION_H
