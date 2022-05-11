#pragma once
#include <ctime>
class Countdown
{
public:
	void startCountdown(int);
	int getTimeLeft();
private:
	time_t startTime_;
	int timeLeft;
};

