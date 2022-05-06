#include "UCBrugPC.h"

UCBrugPC::UCBrugPC(Kode&)
{
}

void UCBrugPC::codeReceived(std::string code)
{
	checkCode(code, codePointer_->getkode());
}

void UCBrugPC::optionChosen(std::string option)
{
}

void UCBrugPC::checkCode(std::string code, std::string receivedCode)
{
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
