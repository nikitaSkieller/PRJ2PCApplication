#pragma once
#include <ctime>
class Countdown
{
public:
	void startCountdown(const int);	//gemmer aktuelle time_t + parameteren i startTime_ og initierer timeLeft_ til parameteren.
	int calculateCurrentTimeLeft();	//sammenligner nuværende tid med startTime_, ændrer timeLeft til ny værdi og returnerer differencen.
private:
	time_t finishTime_;
	int timeLeft_;
};

