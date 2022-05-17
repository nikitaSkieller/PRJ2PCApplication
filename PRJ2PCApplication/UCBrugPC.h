#pragma once
#include "Code.h"
#include "UserInterface.h"
#include <string>
#include "UC.h"

class UCBrugPC
{
public:
	UCBrugPC(Code* codePtr, UserInterface* userInterfacePtr, UC* UCPtr); //correctCode_ initializes to false	
	void runUC();	//runs the UCBrugPC according to the sequence diagram.
private:
	void checkCode(const std::string code, const std::string receivedCode);	//checks if saved and input code are the same, changes correctCode_ accordingly
	Code *code_;
	bool correctCode_;
	UserInterface *UserInterface_;
	UC *UC_;
};

