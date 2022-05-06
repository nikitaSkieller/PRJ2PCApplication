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

	cout << "tryk 1 for indstil sikkerhedssystem" << endl << "tryk 2 for vaelg mode" << endl;
	char pressedkey = _getch();
	while (pressedkey != '1' && pressedkey != '2')
	{

		cout << "indtastningen kunne ikke genkendes, proev igen" << endl;
		cout << "tryk 1 for indstil sikkerhedssystem" << endl << "tryk 2 for vaelg mode" << endl;
		pressedkey = _getch();
	}
	return pressedkey;
}

string UserInterface::showLoginScreen()
{
	cout << "instast kode: " << endl;
	string receivedCode;
	cin >> receivedCode;
	return receivedCode;
}