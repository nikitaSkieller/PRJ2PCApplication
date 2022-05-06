#include "SimpleSerial.h"

int main()
{
	SimpleSerial serialCom("COM4", 9600);

	cout << serialCom.WriteSerialPort("1") << endl;

	return 0;
}