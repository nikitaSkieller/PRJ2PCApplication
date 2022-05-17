#include "ControllerArduino.h"
#include "Countdown.h"
#include "Code.h"
#include "UC.h"
#include "UCBrugPC.h"
#include "UCVaelgModeFraPC.h"
#include "UserInterface.h"

int main()
{
	//instanses og all Classes in program
	ControllerArduino controllerInstance;
	Countdown countdownInstance;
	Code codeInstance;
	UserInterface userinterfaceInstance;
	UCVaelgModeFraPC UCVaelgModeInstance(&controllerInstance, &userinterfaceInstance, &countdownInstance);
	UC UCInstance(&UCVaelgModeInstance);
	UCBrugPC UCBrugPCInstance(&codeInstance, &userinterfaceInstance, &UCInstance);
	//starts UCBrugPC
	UCBrugPCInstance.runUC();

	return 0;

}

