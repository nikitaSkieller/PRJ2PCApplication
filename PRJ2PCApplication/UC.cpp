#include "UC.h"
#include <iostream>
using namespace std;

UC::UC(UCVaelgModeFraPC* vaelgModeFraPC)
{
	UCVaelgModeFraPCPtr_ = vaelgModeFraPC;
}

void UC::startUC(char chosenUC)
{
	//starter UC vaelg Mode fra PC, hvis parameter er 2
	if (chosenUC=='2')
	{
		UCVaelgModeFraPCPtr_->runUC();
	}
	//starter UC sikkerhedssytem, hvis parameteren er 1. (er ikke implementeret)
	if (chosenUC == '1')
	{
		cout << "der er valgt indstil sikkerhedssystem, dette er ikke implementeret";
	}
}
