#include "ControllerArduino.h"
#include <iostream>
using namespace std;

ControllerArduino::ControllerArduino() : arduinoCommunication("COM4", 9600)
{
}

void ControllerArduino::sendMode(const char mode)
{
	if (mode=='1')
	{
		arduinoCommunication.WriteSerialPort("m1\n");
	}
	if (mode=='2')
	{
		arduinoCommunication.WriteSerialPort("m2\n");
	}
}
