#pragma once
#include <string>

class UserInterface
{
public:
	void incorrectCode();
	char showOptions();
	std::string showLoginScreen();
	char showSelectMode();
	bool isCancelHit();
	void displayInt(int);
private:
};

