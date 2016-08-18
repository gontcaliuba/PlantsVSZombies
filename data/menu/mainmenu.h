#ifndef MAINMENU_H
#define MAINMENU_H

#include "data/menu/menustate.h"

class MainMenu : public MenuState
{
public:
    MainMenu();
    virtual ~MainMenu();

    virtual void Settings();
    virtual void GameChoice();
    virtual void Exit();
};

#endif // MAINMENU_H
