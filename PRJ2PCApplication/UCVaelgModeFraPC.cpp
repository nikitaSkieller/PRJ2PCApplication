#include "UCVaelgModeFraPC.h"

UCVaelgModeFraPC::UCVaelgModeFraPC(ControllerArduino* controllerArduinoPtr, UserInterface* UserinterfacePtr, Countdown* CountdownPtr)
{
	controllerArduinoPtr_ = controllerArduinoPtr;
	UserinterfacePtr_ = UserinterfacePtr;
	CountdownPtr_ = CountdownPtr;
}

void UCVaelgModeFraPC::runUC()
{
	//bruger indtaster mode
	char mode = UserinterfacePtr_->showSelectMode();
	//afslutter UC hvis der indtastes c
	if (mode=='c')
	{
		return;
	}
	//starter countdown
	CountdownPtr_->startCountdown(10);
	//logik for loop med countdown, tjekker kontinuert om der trykkes på cancel og afbryder hvis det er tilfældet, 
	//ellers giver besked for hvert sekund. Sender mode valg til arduiono når countdown er slut
	int timeLeft = 10;
	int tempTimeLeft;
	while (timeLeft > 0)
	{
		if (UserinterfacePtr_->isCancelHit())
		{
			return;
		}
		tempTimeLeft = CountdownPtr_->calculateCurrentTimeLeft();
		if (tempTimeLeft!=timeLeft)
		{
			UserinterfacePtr_->displayInt(tempTimeLeft);
			timeLeft = tempTimeLeft;
		}
	}
	controllerArduinoPtr_->sendMode(mode);		
}
