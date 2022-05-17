#pragma once
#include "SimpleSerial.h"

class ControllerArduino
{
public:
	ControllerArduino();
	void sendMode(const char);	//sends char to arduino
private:
	SimpleSerial arduinoCommunication;
};

