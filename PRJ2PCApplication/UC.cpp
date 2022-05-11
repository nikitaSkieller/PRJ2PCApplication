#include "UC.h"
#include <iostream>
using namespace std;

UC::UC(UCVaelgModeFraPC* vaelgModeFraPC)
{
	UCVaelgModeFraPCPtr_ = vaelgModeFraPC;
}

void UC::startUC(char chosenUC)
{
	if (chosenUC=='2')
	{
		UCVaelgModeFraPCPtr_->runUC();
	}
	if (chosenUC == '1')
	{
		cout << "der er valgt indstil sikkerhedssystem, dette er ikke implementeret";
	}
}
