#include "UCBrugPC.h"

UCBrugPC::UCBrugPC(Kode& Kode, UserInterface& userInterface, UC& UC)
{
}

void UCBrugPC::checkCode(std::string code, std::string receivedCode)
{
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
