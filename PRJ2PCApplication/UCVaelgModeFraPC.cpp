#include "UCVaelgModeFraPC.h"

UCVaelgModeFraPC::UCVaelgModeFraPC(ControllerArduino* controllerArduinoPtr, UserInterface* UserinterfacePtr, Countdown* CountdownPtr)
{
	controllerArduinoPtr_ = controllerArduinoPtr;
	UserinterfacePtr_ = UserinterfacePtr;
	CountdownPtr_ = CountdownPtr;
}

void UCVaelgModeFraPC::runUC()
{
	char mode = UserinterfacePtr_->showSelectMode();
	if (mode=='c')
	{
		return;
	}
	CountdownPtr_->startCountdown(10);

	//loop which checks if cancel is pressed and stops if thats the case. Writes to user every 1 secund and sends mode to arduino after countdown
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
