#include "UserInterface.h"
#include <string>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void UserInterface::incorrectCode() const
{
	cout << "forkert code, tryk paa en tast for at proeve igen" << endl;
	while (!_kbhit())
	{
	}
}

char UserInterface::showOptions()
{
	system("cls");
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
	cout << "indtast code: " << endl;
	char receivedChar = 0;
	string code;
	while (receivedChar != '\r')
	{
		receivedChar = _getch();
		if (receivedChar!='\r')
		{
			code.push_back(receivedChar);
			cout << "*";
		}

	}
	return code;
}

char UserInterface::showSelectMode()
{
	char userChoice;
	//validerer brugerindtastning (cancel eller valg af mode samt får bekræftet indtastning
	while (true)
	{
		system("cls");
		cout << "tryk 1 for homeMode, tryk 2 for home alone mode, ellers tryk c for fortryd" << endl;
		userChoice = _getch();
		if (userChoice == 'c')
		{
			return userChoice;
		}
		if (userChoice == '1' || userChoice == '2')
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
			
			char confirmation;
			while (true)
			{
				cout << "tast j for at gemme, tryk c for at afbryde" << endl;
				confirmation = _getch();
				if (confirmation == 'c')
				{
					return confirmation;
				}
				else if (confirmation == 'j')
				{
					system("cls");
					cout << "valg bekraeftet, 10 sekunders countdown starter" << endl;
					cout << "tryk c for at afbryde" << endl;
					return userChoice;
				}
				else
				{
					cout << "ugyldigt valg" << endl;
				}
			}
		}
		cout << "ugyldigt valg, tryk paa en tast for at vaelge mode igen" << endl;
		_getch();
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

void UserInterface::displayInt(const int toDisplay)
{
	cout << "countdown " << toDisplay << endl;
}
