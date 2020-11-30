#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
	Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "None");
	Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "None");
	Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "None");
	Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "None");
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::ScrollListUpdateItem(imageContainer& item, int16_t itemIndex)
{
    item.setNumber(itemIndex);
}

void Screen1View::PourDrink()
{
	//Hide "Pour" button
	PourButton.setVisible(false);
	PourButton.invalidate();
	
	//Hide Settings button
	SettingsButton.setVisible(false);
	SettingsButton.invalidate();
	
	//Show progress bar
	ProgressBar.setVisible(true);
	ProgressBar.invalidate();
	
	PourState = true;
}

void Screen1View::FlowSim()
{
	if (PourState)
	{
		ProgressBar.setValue(ProgressBar.getProgress() + 5);
		if (ProgressBar.getProgress() >= 100)
		{
			//Show "Pour" button
			PourButton.setVisible(true);
			PourButton.invalidate();
			
			//Show settings button
			SettingsButton.setVisible(true);
			SettingsButton.invalidate();
			
			//Hide progress bar
			ProgressBar.setValue(0);
			ProgressBar.setVisible(false);
			ProgressBar.invalidate();
			
			PourState = false;
		}
	}
}

void Screen1View::SettingsScreen()
{
	HideMainMenu();
	
	ShowSettings();
}

void Screen1View::ExitSettings()
{
	ShowMainMenu();
	
	HideSettings();
}

void Screen1View::Click250mL()
{
	Button250mL.setAlpha(255);
	Button500mL.setAlpha(135);
	Button750mL.setAlpha(135);
	Button250mL.invalidate();
	Button500mL.invalidate();
	Button750mL.invalidate();
	
	//ChangeSize(_250ML);
}

void Screen1View::Click500mL()
{
	Button250mL.setAlpha(135);
	Button500mL.setAlpha(255);
	Button750mL.setAlpha(135);
	Button250mL.invalidate();
	Button500mL.invalidate();
	Button750mL.invalidate();
	
	//ChangeSize(_500ML);
}

void Screen1View::Click750mL()
{
	Button250mL.setAlpha(135);
	Button500mL.setAlpha(135);
	Button750mL.setAlpha(255);
	Button250mL.invalidate();
	Button500mL.invalidate();
	Button750mL.invalidate();
	
	//ChangeSize(_750ML);
}

void Screen1View::ChangePump1()
{
	switch (Pump1ContentBuffer[0])
	{
		case 'N':
			SelectNone.setAlpha(255);
			break;
			
		case 'J':
			SelectJuice.setAlpha(255);
			break;
			
		case 'W':
			SelectWater.setAlpha(255);
			break;
			
		case 'G':
			SelectGin.setAlpha(255);
			break;
			
		case 'T':
			if (Pump1ContentBuffer[1] == 'e')
			{
				SelectTequila.setAlpha(255);
			}
			break;
			
		case 'V':
			SelectVodka.setAlpha(255);
			break;
			
		case 'R':
			SelectRum.setAlpha(255);
			break;
			
		default:
			break;
	}
	
	HideSettings();
	ShowPumpSetup();
		
	PumpID = 1;
}

void Screen1View::ChangePump2()
{
	switch (Pump2ContentBuffer[0])
	{
		case 'N':
			SelectNone.setAlpha(255);
			break;
			
		case 'J':
			SelectJuice.setAlpha(255);
			break;
			
		case 'W':
			SelectWater.setAlpha(255);
			break;
			
		case 'G':
			SelectGin.setAlpha(255);
			break;
			
		case 'T':
			if (Pump2ContentBuffer[1] == 'e')
			{
				SelectTequila.setAlpha(255);
			}
			break;
			
		case 'V':
			SelectVodka.setAlpha(255);
			break;
			
		case 'R':
			SelectRum.setAlpha(255);
			break;
			
		default:
			break;
	}
	
	HideSettings();
	ShowPumpSetup();
	
	PumpID = 2;
}

void Screen1View::ChangePump3()
{
	switch (Pump3ContentBuffer[0])
	{
		case 'N':
			SelectNone.setAlpha(255);
			break;
			
		case 'J':
			SelectJuice.setAlpha(255);
			break;
			
		case 'W':
			SelectWater.setAlpha(255);
			break;
			
		case 'G':
			SelectGin.setAlpha(255);
			break;
			
		case 'T':
			if (Pump3ContentBuffer[1] == 'e')
			{
				SelectTequila.setAlpha(255);
			}
			break;
			
		case 'V':
			SelectVodka.setAlpha(255);
			break;
			
		case 'R':
			SelectRum.setAlpha(255);
			break;
			
		default:
			break;
	}
	
	HideSettings();
	ShowPumpSetup();
	
	PumpID = 3;
}

void Screen1View::ChangePump4()
{
	switch (Pump4ContentBuffer[0])
	{
		case 'N':
			SelectNone.setAlpha(255);
			break;
			
		case 'J':
			SelectJuice.setAlpha(255);
			break;
			
		case 'W':
			SelectWater.setAlpha(255);
			break;
			
		case 'G':
			SelectGin.setAlpha(255);
			break;
			
		case 'T':
			if (Pump4ContentBuffer[1] == 'e')
			{
				SelectTequila.setAlpha(255);
			}
			break;
			
		case 'V':
			SelectVodka.setAlpha(255);
			break;
			
		case 'R':
			SelectRum.setAlpha(255);
			break;
			
		default:
			break;
	}
	
	HideSettings();
	ShowPumpSetup();
	
	PumpID = 4;
}

void Screen1View::ToJuice()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Juice");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Juice");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Juice");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Juice");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToWater()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Water");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Water");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Water");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Water");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToNone()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "None");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "None");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "None");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "None");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToGin()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Gin");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Gin");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Gin");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Gin");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToRum()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Rum");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Rum");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Rum");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Rum");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToTequila()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Tequila");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Tequila");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Tequila");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Tequila");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToVodka()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Vodka");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Vodka");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Vodka");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Vodka");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToTodo1()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Todo1");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Todo1");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Todo1");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Todo1");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}

void Screen1View::ToTodo2()
{
	if (PumpID == 1)
	{
		Unicode::snprintf(Pump1ContentBuffer, PUMP1CONTENT_SIZE, "Todo2");
	}
	else if (PumpID == 2)
	{
		Unicode::snprintf(Pump2ContentBuffer, PUMP2CONTENT_SIZE, "Todo2");
	}
	else if (PumpID == 3)
	{
		Unicode::snprintf(Pump3ContentBuffer, PUMP3CONTENT_SIZE, "Todo2");
	}
	else
	{
		Unicode::snprintf(Pump4ContentBuffer, PUMP4CONTENT_SIZE, "Todo2");
	}
	
	SelectJuice.setAlpha(135);
	SelectGin.setAlpha(135);
	SelectNone.setAlpha(135);
	SelectRum.setAlpha(135);
	SelectTequila.setAlpha(135);
	SelectVodka.setAlpha(135);
	SelectWater.setAlpha(135);
	SelectTodo1.setAlpha(135);
	SelectTodo1_1.setAlpha(135);
	
    HidePumpSetup();
	ShowSettings();
}


/****************************************
*										*
*	FUNCTIONS FOR COMMON INTERACTIONS	*
*										*
****************************************/
void Screen1View::HideMainMenu()
{
	//Hide "Pour" button
	PourButton.setVisible(false);
	PourButton.invalidate();
	
	//Hide Scroll List
	ScrollList.setVisible(false);
	ScrollList.invalidate();
	
	//Hide Settings button
	SettingsButton.setVisible(false);
	SettingsButton.invalidate();
}

void Screen1View::ShowMainMenu()
{
	//Show "Pour" button
	PourButton.setVisible(true);
	PourButton.invalidate();
	
	//Show Scroll List
	ScrollList.setVisible(true);
	ScrollList.invalidate();
	
	//Show Settings button
	SettingsButton.setVisible(true);
	SettingsButton.invalidate();
}

void Screen1View::HideSettings()
{
	//Hide exit settings button
	ExitButton.setVisible(false);
	ExitButton.invalidate();
	
	//Hide size options buttons
	Button250mL.setVisible(false);
	Button500mL.setVisible(false);
	Button750mL.setVisible(false);
	Button250mL.invalidate();
	Button500mL.invalidate();
	Button750mL.invalidate();
	
	//Hide pump setting text and buttons
	Pump1Text.setVisible(false);
	Pump2Text.setVisible(false);
	Pump3Text.setVisible(false);
	Pump4Text.setVisible(false);
	Pump1Content.setVisible(false);
	Pump2Content.setVisible(false);
	Pump3Content.setVisible(false);
	Pump4Content.setVisible(false);
	Pump1Change.setVisible(false);
	Pump2Change.setVisible(false);
	Pump3Change.setVisible(false);
	Pump4Change.setVisible(false);
	Pump1Text.invalidate();
	Pump2Text.invalidate();
	Pump3Text.invalidate();
	Pump4Text.invalidate();
	Pump1Content.invalidate();
	Pump2Content.invalidate();
	Pump3Content.invalidate();
	Pump4Content.invalidate();
	Pump1Change.invalidate();
	Pump2Change.invalidate();
	Pump3Change.invalidate();
	Pump4Change.invalidate();
	
	//Hide text and lines
	QuantityText.setVisible(false);
	SettingsText.setVisible(false);
	Line1.setVisible(false);
	Line1_2.setVisible(false);
	Line2.setVisible(false);
	Line3.setVisible(false);
	PumpDiv1.setVisible(false);
	PumpDiv2.setVisible(false);
	PumpDiv3.setVisible(false);
	QuantityText.invalidate();
	SettingsText.invalidate();
	Line1.invalidate();
	Line1_2.invalidate();
	Line2.invalidate();
	Line3.invalidate();
	PumpDiv1.invalidate();
	PumpDiv2.invalidate();
	PumpDiv3.invalidate();
}

void Screen1View::ShowSettings()
{
	//Show exit settings button
	ExitButton.setVisible(true);
	ExitButton.invalidate();
	
	//Show size options buttons
	Button250mL.setVisible(true);
	Button500mL.setVisible(true);
	Button750mL.setVisible(true);
	Button250mL.invalidate();
	Button500mL.invalidate();
	Button750mL.invalidate();
	
	//Show pump setting text and buttons
	Pump1Text.setVisible(true);
	Pump2Text.setVisible(true);
	Pump3Text.setVisible(true);
	Pump4Text.setVisible(true);
	Pump1Content.setVisible(true);
	Pump2Content.setVisible(true);
	Pump3Content.setVisible(true);
	Pump4Content.setVisible(true);
	Pump1Change.setVisible(true);
	Pump2Change.setVisible(true);
	Pump3Change.setVisible(true);
	Pump4Change.setVisible(true);
	Pump1Text.invalidate();
	Pump2Text.invalidate();
	Pump3Text.invalidate();
	Pump4Text.invalidate();
	Pump1Content.invalidate();
	Pump2Content.invalidate();
	Pump3Content.invalidate();
	Pump4Content.invalidate();
	Pump1Change.invalidate();
	Pump2Change.invalidate();
	Pump3Change.invalidate();
	Pump4Change.invalidate();
	
	//Show text and lines
	QuantityText.setVisible(true);
	SettingsText.setVisible(true);
	Line1.setVisible(true);
	Line1_2.setVisible(true);
	Line2.setVisible(true);
	Line3.setVisible(true);
	PumpDiv1.setVisible(true);
	PumpDiv2.setVisible(true);
	PumpDiv3.setVisible(true);
	QuantityText.invalidate();
	SettingsText.invalidate();
	Line1.invalidate();
	Line1_2.invalidate();
	Line2.invalidate();
	Line3.invalidate();
	PumpDiv1.invalidate();
	PumpDiv2.invalidate();
	PumpDiv3.invalidate();
}

void Screen1View::ShowPumpSetup()
{
	//Show liquid option buttons
	SelectText.setVisible(true);
	SelectWater.setVisible(true);
	SelectNone.setVisible(true);
	SelectJuice.setVisible(true);
	SelectVodka.setVisible(true);
	SelectTequila.setVisible(true);
	SelectRum.setVisible(true);
	SelectGin.setVisible(true);
	SelectTodo1_1.setVisible(true);
	SelectTodo1.setVisible(true);
	SelectText.invalidate();
	SelectVodka.invalidate();
	SelectTequila.invalidate();
	SelectRum.invalidate();
	SelectWater.invalidate();
	SelectGin.invalidate();
	SelectNone.invalidate();
	SelectJuice.invalidate();
	SelectTodo1_1.invalidate();
	SelectTodo1.invalidate();
}

void Screen1View::HidePumpSetup()
{
	//Hide liquid option buttons
	SelectText.setVisible(false);
	SelectWater.setVisible(false);
	SelectNone.setVisible(false);
	SelectJuice.setVisible(false);
	SelectVodka.setVisible(false);
	SelectTequila.setVisible(false);
	SelectRum.setVisible(false);
	SelectGin.setVisible(false);
	SelectTodo1_1.setVisible(false);
	SelectTodo1.setVisible(false);
	SelectText.invalidate();
	SelectVodka.invalidate();
	SelectTequila.invalidate();
	SelectRum.invalidate();
	SelectWater.invalidate();
	SelectGin.invalidate();
	SelectNone.invalidate();
	SelectJuice.invalidate();
	SelectTodo1_1.invalidate();
	SelectTodo1.invalidate();
}