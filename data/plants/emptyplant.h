#ifndef EMPTYPLANT_H
#define EMPTYPLANT_H

#include "data/plants/plant.h"

class EmptyPlant : public Plant
{
public:
    EmptyPlant(const Position &position);
    virtual ~EmptyPlant();

    virtual bool canReplant(const Plant &plant) const;
    virtual PlantType getPlantType();
};

#endif // EMPTYPLANT_H
