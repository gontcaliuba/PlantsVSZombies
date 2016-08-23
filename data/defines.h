#ifndef DEFINES
#define DEFINES

#include "QString"

typedef int Logic_Coordinate;
typedef float Physic_Coordinate;
typedef float Graphical_Coordinate;
typedef float Health_Points;
typedef float Damage;
typedef float Fertility;
typedef float Sun_Point;
typedef float Plant_Power;
typedef float Zombie_Power_Coeff;
typedef long Millisecond;
typedef QString GoalsMessage;
typedef bool Status;


struct GoalsConditions
{
    bool isZombieAfterBorder;
    bool allZombiesDead;
    Sun_Point collectedSuns;
    Millisecond elapsedTime;
};

#endif // DEFINES

