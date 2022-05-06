#include "Kode.h"
#include "UserInterface.h"
#include "UCBrugPC.h"
#include "UC.h"
#include <iostream>
using namespace std;

int main()
{
	////test Kode.h
	//Kode myCode = Kode();
	//cout << myCode.getkode() << endl;	//skriver koden ud

	////test UserInterface.h
	//UserInterface myUI = UserInterface();
	//cout << myUI.showLoginScreen() << endl; //beder bruger indtaste kode og returnerer indtastning

	//cout << myUI.showOptions() << endl; //indatst !1 og !2, bliv bedt om at indtaste igen, indtast så 1, returnerer 1
	//cout << myUI.showOptions() << endl; //indtast 2, returnerer 2

	//myUI.incorrectCode(); //fejlmeddelelse, afventer tryk på tastatur
	//return 0;

	//test UCBrugPC.h
	Kode k1;
	UserInterface UI1;
	UC UC1;
	UCBrugPC instanceUC(&k1, &UI1, &UC1);
	instanceUC.runUC();
	return 0;
}