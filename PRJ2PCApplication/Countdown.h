#pragma once
#include <ctime>
class Countdown
{
public:
	void startCountdown(int);	//gemmer aktuelle time_t i startTime_ og initierer timeLeft_ til parameteren.
	int getTimeLeft();	//sammenligner nuværende tid med startTime_ og returnerer differencen
private:
	time_t startTime_;
	int timeLeft_;
};

