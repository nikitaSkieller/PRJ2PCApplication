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
	//bliver i UC så længe correctCode_ er false
	while (correctCode_==false)
	{
		//tjekker om indtastet kode er korrekt
		checkCode(Kode_->getkode(), UserInterface_->showLoginScreen());
		//giver bruger besked om forkert kode
		if (correctCode_ == false)
		{
			UserInterface_->incorrectCode();
		}
	}
	//starter næste UC
	UC_->startUC(UserInterface_->showOptions());
}

void UCBrugPC::checkCode(const std::string code, const std::string receivedCode)
{
	//gør kun noget hvis den korrekte kode er indtastet, ændrer correctCode_ til true
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
