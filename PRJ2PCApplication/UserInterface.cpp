#include "UserInterface.h"
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void UserInterface::incorrectCode()
{
	cout << "forkert kode, tryk paa en tast for at proeve igen" << endl;
	while (!_kbhit())
	{
	}
}

char UserInterface::showOptions()
{
	cout << "tryk 1 for indstil sikkerhedssystem, tryk 2 for vaelg mode" << endl;
	char pressedkey = _getch();
	while (pressedkey != '1' && pressedkey != '2')
	{
		cout << "indtastningen kunne ikke genkendes, proev igen" << endl;
		cout << "tryk 1 for indstil sikkerhedssystem, tryk 2 for vaelg mode" << endl;
		pressedkey = _getch();
	}
	return pressedkey;
}

string UserInterface::showLoginScreen()
{
	cout << "indtast kode: " << endl;
	string receivedCode;
	cin >> receivedCode;
	return receivedCode;
}

char UserInterface::showSelectMode()
{
	char userChoice;
	//validerer brugerindtastning (cancel eller valg af mode samt får bekræftet indtastning
	while (true)
	{
		cout << "tryk 1 for homeMode, tryk 2 for home alone mode eller tryk 3 for away mode, ellers tryk c for fortryd" << endl;
		userChoice = _getch();
		if (userChoice == 'c')
		{
			return userChoice;
		}
		if (userChoice == '1' || userChoice == '2' || userChoice == '3')
		{
			cout << "du har valgt mode ";
			if (userChoice=='1')
			{
				cout << "1 homeMode" << endl;
			}
			else if (userChoice == '2')
			{
				cout << "2 home alone Mode" << endl;
			}
			else if (userChoice == '3')
			{
				cout << "3 away mode" << endl;
			}
			cout << "tast j for at gemme, tryk c for at afbryde" << endl;
			char confirmation;
			confirmation = _getch();
			if (confirmation=='c')
			{
				return confirmation;
			}
			else if (confirmation=='j')
			{
				cout << "valg bekraeftet, 10 sekunders countdown starter" << endl << "tryk c for at afbryde" << endl;
				return userChoice;
			}
		}
		cout << "ugyldigt valg" << endl;
	}
}

bool UserInterface::isCancelHit()
{
	if (_kbhit())
	{
		if (_getch() == 'c')
		{
			return true;
		}
	}
	return false;
}

void UserInterface::displayInt(int toDisplay)
{
	cout << "countdown " << toDisplay << endl;
}
