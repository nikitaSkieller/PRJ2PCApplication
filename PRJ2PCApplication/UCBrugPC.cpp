#include "UCBrugPC.h"

UCBrugPC::UCBrugPC(Code* codePtr, UserInterface* userInterfacePtr, UC* UCPtr)
{
	code_ = codePtr;
	UserInterface_ = userInterfacePtr;
	UC_ = UCPtr;
	correctCode_ = false;
}

void UCBrugPC::runUC()
{

	while (correctCode_==false)
	{
		//check if user entry is correct coe
		checkCode(code_->getcode(), UserInterface_->showLoginScreen());
		//errormessage
		if (correctCode_ == false)
		{
			UserInterface_->incorrectCode();
		}
	}
	//run next UC
	UC_->startUC(UserInterface_->showOptions());
}

void UCBrugPC::checkCode(const std::string code, const std::string receivedCode)
{
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
