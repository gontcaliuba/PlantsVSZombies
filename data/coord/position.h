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
    void setLogicX(Logic_Coordinate x);
    void setLogicY(Logic_Coordinate y);
    void setPhysicX(Physic_Coordinate x);
    void setPhysicY(Physic_Coordinate y);
};

#endif // POSITION_H
