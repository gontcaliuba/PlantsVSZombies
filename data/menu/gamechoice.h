#ifndef GAMECHOICE_H
#define GAMECHOICE_H

#include "data/menu/menustate.h"

class GameChoice : public MenuState
{
public:
    GameChoice();
    virtual ~GameChoice();

    virtual void ChooseComplexity();
    virtual void ChooseLevel();
    virtual void Play();
};

#endif // GAMECHOICE_H
