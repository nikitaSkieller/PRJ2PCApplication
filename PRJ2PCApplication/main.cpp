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
	//loop for test
	char choice;
	while (true)
	{
		UCBrugPCInstance.runUC();
		system("cls");
		//starts UCBrugPC
		cout << "tast 1 for indstillinger(ikke implementeret)\ntast 2 for vaelg mode\ntast 3 for at logge ud\ntast 4 for at afslutte programmet" << endl;
		choice = _getch();
	
		switch (choice)
		{
		case '1':
			UCInstance.startUC('1');
			break;
		case '2':
			UCVaelgModeInstance.runUC();
			break;
		case '3':
			UCBrugPCInstance.runUC();
		case'4':
			return 0;
		default:
			break;
		}

	}



}

