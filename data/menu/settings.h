#ifndef SETTINGS_H
#define SETTINGS_H

#include "data/menu/menustate.h"

class Settings : public MenuState
{
public:
    Settings();
    virtual ~Settings();

    virtual void MusicSetting();
    virtual void SoundSetting();
    virtual void MainMenu();
};

#endif // SETTINGS_H
