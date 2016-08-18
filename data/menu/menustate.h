#ifndef MENUSTATE_H
#define MENUSTATE_H


class MenuState
{
public:
    MenuState();
    virtual ~MenuState();

    virtual void Settings();
    virtual void GameChoice();
    virtual void Exit();
    virtual void MusicSetting();
    virtual void SoundSetting();
    virtual void MainMenu();
    virtual void ChooseComplexity();
    virtual void ChooseLevel();
    virtual void Play();
};

#endif // MENUSTATE_H
