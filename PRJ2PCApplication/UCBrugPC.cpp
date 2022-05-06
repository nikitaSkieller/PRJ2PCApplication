#include "UCBrugPC.h"

UCBrugPC::UCBrugPC(Kode* kodePtr, UserInterface* userInterfacePtr, UC* UCPtr)
{
	Kode_ = kodePtr;
	UserInterface_ = userInterfacePtr;
	UC_ = UCPtr;
	correctCode_ = false;
}

void UCBrugPC::runUC()
{
	while (correctCode_==false)
	{
		checkCode(Kode_->getkode(), UserInterface_->showLoginScreen());
		if (correctCode_ == false)
		{
			UserInterface_->incorrectCode();
		}
	}
	UC_->startUC(UserInterface_->showOptions());
}

void UCBrugPC::checkCode(std::string code, std::string receivedCode)
{
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
