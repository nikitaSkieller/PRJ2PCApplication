#include "SimpleSerial.h"
#include <conio.h>

int main()
{
	SimpleSerial serialCom("COM3", 9600);

	cout << serialCom.WriteSerialPort("1") << endl;

	while (1)
	{
		char pressedKey = _getch();
		serialCom.WriteSerialPort(&pressedKey);
	}

	return 0;
}