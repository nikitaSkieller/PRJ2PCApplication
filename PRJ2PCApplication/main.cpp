#include "ControllerArduino.h"
#include "Countdown.h"
#include "Code.h"
#include "UC.h"
#include "UCBrugPC.h"
#include "UCVaelgModeFraPC.h"
#include "UserInterface.h"
#include <conio.h>

int main()
{
	//instanses and all Classes in program
	ControllerArduino controllerInstance;
	Countdown countdownInstance;
	Code codeInstance;
	UserInterface userinterfaceInstance;
	UCVaelgModeFraPC UCVaelgModeInstance(&controllerInstance, &userinterfaceInstance, &countdownInstance);
	UC UCInstance(&UCVaelgModeInstance);
	UCBrugPC UCBrugPCInstance(&codeInstance, &userinterfaceInstance, &UCInstance);
	char choice;
	//loop for test
	while (true)
	{
		cout << "tast 1 for login, tast 2 for sluk program" << endl;
		choice=_getch();
		switch (choice)
		{
		case '1':
			UCBrugPCInstance.runUC();
			break;
		case '2':
			return 0;
			break;
		default:
			break;
		}

	}
}

