#include "Kode.h"
#include "UserInterface.h"
#include "UCBrugPC.h"
#include "UC.h"
#include "Countdown.h"
#include "UCVaelgModeFraPC.h"
#include "ControllerArduino.h"
#include <iostream>
#include <conio.h>
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

	////test UCBrugPC.h
	//Kode k1;
	//UserInterface UI1;
	//UC UC1;
	//UCBrugPC instanceUC1(&k1, &UI1, &UC1);
	//UCBrugPC instanceUC2(&k1, &UI1, &UC1);
	//instanceUC1.runUC();	//indtast forkert kode, indtast rigtig kode, tast !1 eller 2, tast 1
	//instanceUC2.runUC();	//indtast rigtig kode, indtast 2;

	//test USerInterface UCVaelgModeFraPC

	//UserInterface myUI;
	//cout << myUI.showSelectMode() << endl; //vælg forkert, så mode 1, udskriver bekræftelse, bekræft, skriver "1"
	//cout << myUI.showSelectMode() << endl; //vælg mode 2, udskriver bekræftelse, afkræft, skriver "c"
	//cout << myUI.showSelectMode() << endl;//vælg mode 2, udskriver bekræftelse, bekræft, skriver "2"
	//cout << myUI.showSelectMode() << endl;//vælg mode 3, udskriver bekræftelse, bekræft, skriver "3"
	//while (!_kbhit())	//tryk n
	//{
	//}
	//cout << myUI.isCancelHit() << endl;	//udskriv false
	//while (!_kbhit())	//tryk c
	//{
	//}
	//cout << myUI.isCancelHit() << endl;	//udskriv true
	//myUI.displayInt(2);		//udskriv 2

	//test Countdown
	//Countdown myCounter;
	//myCounter.startCountdown(10);	//start timer 10 sec
	//int timeLeft=11;
	//int tempTimeLeft;
	//while (timeLeft>0)	//tæller ned fra 10 sekunder, hvis der er ændring.
	//{
	//	tempTimeLeft = myCounter.getTimeLeft();
	//	if (tempTimeLeft < timeLeft)
	//	{
	//		
	//		cout << tempTimeLeft << endl;
	//		timeLeft = tempTimeLeft;
	//	}
	//}
	//return 0;

	////test UCVaelgModeFraPC
	//ControllerArduino myArduino;
	//UserInterface myUserInterface;
	//Countdown myCountdown;
	//UCVaelgModeFraPC myUCVaelgMode(&myArduino, &myUserInterface, &myCountdown);
	//myUCVaelgMode.runUC();

	//

	//test UC
	ControllerArduino myController;
	UserInterface myUI;
	Countdown myCountdown;

	UCVaelgModeFraPC myUCVaelgModeFraPC(&myController, &myUI, &myCountdown);
	UC myUC(&myUCVaelgModeFraPC);
	myUC.startUC('1');	//meddelelse om start af Uc ikke er implementeret
	myUC.startUC('2');	//starter UC vaelg mode
	myUC.startUC('3');	//gør ingenting

	return 0;

}