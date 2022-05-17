#include "SimpleSerial.h"
#include <conio.h>

int main()
{
	SimpleSerial serialCom("COM4", 9600);

	while (true)
	{
		cout << serialCom.WriteSerialPort("m1\n") << endl;
		Sleep(1000);
		cout << serialCom.WriteSerialPort("m2\n") << endl;
		Sleep(1000);
		cout << serialCom.WriteSerialPort("m3\n") << endl;
	}

	return 0;
}