#ifndef POSITION_H
#define POSITION_H

#include "data/defines.h"
#include "math.h"

class Position
{
    Physic_Coordinate x;
    Physic_Coordinate y;

public:
    Position();
    Position(Physic_Coordinate x, Physic_Coordinate y);
    Position(Logic_Coordinate x, Logic_Coordinate y);

    Logic_Coordinate getLogicX() const;
    Logic_Coordinate getLogicY() const;
    Physic_Coordinate getPhysicX() const;
    Physic_Coordinate getPhysicY() const;
    Graphical_Coordinate getGraphicalX(float offsetX, float cellSizeX) const;
    Graphical_Coordinate getGraphicalY(float offsetY, float cellSizeY) const;
    void setLogicPosition(Logic_Coordinate x, Logic_Coordinate y);
    void setPhysicPosition(Physic_Coordinate x, Physic_Coordinate y);
    void setLogicPosition(Position newPosition);
    void setPhysicPosition(Position newPosition);
};

#endif // POSITION_H
