#include "UC.h"
#include <iostream>
#include <conio.h>
using namespace std;

UC::UC(UCVaelgModeFraPC* vaelgModeFraPC)
{
	UCVaelgModeFraPCPtr_ = vaelgModeFraPC;
}

void UC::startUC(const char chosenUC)
{
	//starts UDVaelgModeFraPC if parameter is 2
	if (chosenUC=='2')
	{
		UCVaelgModeFraPCPtr_->runUC();
	}
	//starts UCIndstilSikkerhedssystem, if the parameter is 1 (not impelemnted)
	if (chosenUC == '1')
	{
		system("cls");
		cout << "der er valgt indstil sikkerhedssystem, dette er ikke implementeret\ntryk paa en tast for at starte programmet forfra";
		_getch();
	}
}
