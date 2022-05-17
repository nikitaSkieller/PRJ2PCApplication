#pragma once
#include "UCVaelgModeFraPC.h"
class UC
{
public:
	UC(UCVaelgModeFraPC* vaelgModeFraPC);
	void startUC(const char); //starts UC: "UCindstilSikkerhedssystem" if 1, "UCvaelgModeFraPC if 2
private:
	UCVaelgModeFraPC* UCVaelgModeFraPCPtr_;
};

