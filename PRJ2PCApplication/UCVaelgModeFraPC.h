#pragma once
#include "ControllerArduino.h"
#include "Countdown.h"
#include "UserInterface.h"

class UCVaelgModeFraPC
{
public:
	UCVaelgModeFraPC(ControllerArduino* controllerArduinoPtr, UserInterface* UserinterfacePtr, Countdown* CountdownPtr);	//initialiserer attributter
	void runUC();	//logikken som kører UC i hht. sekvensdiagram
private:
	ControllerArduino* controllerArduinoPtr_;
	UserInterface* UserinterfacePtr_; 
	Countdown* CountdownPtr_;
};

