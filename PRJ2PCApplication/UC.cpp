#include "UC.h"
#include <iostream>
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
		cout << "der er valgt indstil sikkerhedssystem, dette er ikke implementeret";
	}
}
