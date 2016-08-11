#ifndef LOGICPOSITION_H
#define LOGICPOSITION_H

#include "data/defines.h"
#include "data/coord/position.h"

class LogicPosition : public Position
{
private:
    Logic_Coordinate x;
    Logic_Coordinate y;

public:
    LogicPosition();
    LogicPosition(Logic_Coordinate x, Logic_Coordinate y);

    void setX(Logic_Coordinate x);
    void setY(Logic_Coordinate y);
    Logic_Coordinate getX() const;
    Logic_Coordinate getY() const;
};

#endif // LOGICPOSITION_H
