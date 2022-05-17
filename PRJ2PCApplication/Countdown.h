#pragma once
#include <ctime>
class Countdown
{
public:
	void startCountdown(const int);	//saves the sum of current time and the parameter to startTime_ and initiates timeLeft_ to the parameter. 
	int calculateCurrentTimeLeft();	//compares current time to startTime_ and changes timeLeft to the differens and returns the difference
private:
	time_t finishTime_;
	int timeLeft_;
};

