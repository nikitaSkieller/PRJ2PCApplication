#pragma once
#include "Kode.h"
#include <string>
class UCBrugPC
{
public:
	UCBrugPC(Kode&);
	void codeReceived(std::string code);
	void optionChosen(std::string option);
private:
	void checkCode(std::string code, std::string receivedCode);
	Kode* codePointer_;
	bool correctCode_ = false;
};

