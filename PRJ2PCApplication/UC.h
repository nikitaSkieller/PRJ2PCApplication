#pragma once
#include "UCVaelgModeFraPC.h"
class UC
{
public:
	UC(UCVaelgModeFraPC* vaelgModeFraPC);
	void startUC(char); //starter UC indstil sikkerhedssystem hvis 1 ellers hvis 2 starter UC vælg mode
private:
	UCVaelgModeFraPC* UCVaelgModeFraPCPtr_;
};

