#include "ControllerArduino.h"
#include "Countdown.h"
#include "Kode.h"
#include "UC.h"
#include "UCBrugPC.h"
#include "UCVaelgModeFraPC.h"
#include "UserInterface.h"

int main()
{
	//opretter instanser af alle klasser brugt i programmet
	ControllerArduino controllerInstance;
	Countdown countdownInstance;
	Kode kodeInstance;
	UserInterface userinterfaceInstance;
	UCVaelgModeFraPC UCVaelgModeInstance(&controllerInstance, &userinterfaceInstance, &countdownInstance);
	UC UCInstance(&UCVaelgModeInstance);
	UCBrugPC UCBrugPCInstance(&kodeInstance, &userinterfaceInstance, &UCInstance);
	//starter program med UC brug PC
	UCBrugPCInstance.runUC();

	return 0;

}

