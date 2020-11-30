#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void ScrollListUpdateItem(imageContainer& item, int16_t itemIndex);
	virtual void PourDrink();
	virtual void SettingsScreen();
	virtual void ExitSettings();
	virtual void Click250mL();
    virtual void Click500mL();
    virtual void Click750mL();
	virtual void FlowSim();
	virtual void ChangePump1();
    virtual void ChangePump2();
    virtual void ChangePump3();
    virtual void ChangePump4();
	
	virtual void HideMainMenu();
	virtual void ShowMainMenu();
	virtual void HideSettings();
	virtual void ShowSettings();
	virtual void ShowPumpSetup();
	virtual void HidePumpSetup();
	
	virtual void ToJuice();
    virtual void ToWater();
    virtual void ToNone();
    virtual void ToGin();
    virtual void ToRum();
    virtual void ToTequila();
    virtual void ToVodka();
    virtual void ToTodo1();
    virtual void ToTodo2();

protected:
	bool PourState;
	uint8_t PumpID;
};

#endif // SCREEN1VIEW_HPP
