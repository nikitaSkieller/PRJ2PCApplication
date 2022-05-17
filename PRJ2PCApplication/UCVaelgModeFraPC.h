#pragma once
#include "ControllerArduino.h"
#include "Countdown.h"
#include "UserInterface.h"

class UCVaelgModeFraPC
{
public:
	UCVaelgModeFraPC(ControllerArduino* controllerArduinoPtr, UserInterface* UserinterfacePtr, Countdown* CountdownPtr);
	void runUC();	//runs UCVaelgModeFraPC according to sequence diagram
private:
	ControllerArduino* controllerArduinoPtr_;
	UserInterface* UserinterfacePtr_; 
	Countdown* CountdownPtr_;
};

