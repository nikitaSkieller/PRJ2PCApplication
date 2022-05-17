#pragma once
#include <string>

class UserInterface
{
public:
	void incorrectCode() const;	//runs communication for wrong code through console
	char showOptions();	//runs communication for choices, return userchoice "vaelg mode" or "indstillinger"
	std::string showLoginScreen();	//runs login communication, returns entry
	char showSelectMode();	//shows mode choices
	bool isCancelHit();	//checks if cancel is pressed
	void displayInt(const int);	//write parameter to console
private:
};

