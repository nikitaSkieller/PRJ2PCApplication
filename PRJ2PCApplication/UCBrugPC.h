#pragma once
#include "Kode.h"
#include "UserInterface.h"
#include <string>
#include "UC.h"

class UCBrugPC
{
public:
	UCBrugPC(Kode* KodePtr, UserInterface* userInterfacePtr, UC* UCPtr);
	void runUC();
private:
	void checkCode(std::string code, std::string receivedCode);
	Kode *Kode_;
	bool correctCode_;
	UserInterface *UserInterface_;
	UC *UC_;
};

