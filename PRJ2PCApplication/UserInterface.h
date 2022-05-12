#pragma once
#include <string>

class UserInterface
{
public:
	void incorrectCode();	//udskriver skærm for forkert indtastet kode
	char showOptions();	//udskriver skærm for valg af funktioner i program(vælg mode eller indstillinger), returnerer valg
	std::string showLoginScreen();	//viser loginSkærm, returnerer indtastning
	char showSelectMode();	// viser valg for modes
	bool isCancelHit();	//tjekker, om der er trykket på 'c'
	void displayInt(int);	//udskriver den valgte parameter
private:
};

