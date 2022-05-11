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
	bool cancel = false;
	int timeLeft = 10;
	int tempTimeLeft;
	while (cancel==false && timeLeft > 0)
	{
		if (UserinterfacePtr_->isCancelHit())
		{
			return;
		}
		tempTimeLeft = CountdownPtr_->getTimeLeft();
		if (tempTimeLeft!=timeLeft)
		{
			UserinterfacePtr_->displayInt(tempTimeLeft);
			timeLeft = tempTimeLeft;
		}
	}
	controllerArduinoPtr_->sendMode(mode);		
}
