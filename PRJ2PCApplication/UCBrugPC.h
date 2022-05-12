#pragma once
#include "Kode.h"
#include "UserInterface.h"
#include <string>
#include "UC.h"

class UCBrugPC
{
public:
	UCBrugPC(Kode* KodePtr, UserInterface* userInterfacePtr, UC* UCPtr);	//initialiserer attributter med parametre
	void runUC();	//logikken. der kører metoderne i UCBrugPC i hht. sekvensdiagram
private:
	void checkCode(const std::string code, const std::string receivedCode);	//UC bruger selv denne metode til at tjekke om indtastet kode og gemt kode er ens, ændrer correctCode_ i hht resultat
	Kode *Kode_;
	bool correctCode_;
	UserInterface *UserInterface_;
	UC *UC_;
};

