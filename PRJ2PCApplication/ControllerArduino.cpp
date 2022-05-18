#include "ControllerArduino.h"
#include <iostream>
using namespace std;

ControllerArduino::ControllerArduino() : arduinoCommunication("COM3", 9600)
{
}

void ControllerArduino::sendMode(const char mode)
{
	if (mode=='1' || mode=='2')
	{
		arduinoCommunication.WriteSerialPort(("m" + mode));
	}
}
