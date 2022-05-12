#include "Countdown.h"

void Countdown::startCountdown(int seconds)
{
    finishTime_ = time(NULL)+seconds;
    timeLeft_ = seconds;
}

int Countdown::calculateCurrentTimeLeft()
{
    //ændrer timeLeft_ til aktuel tid tilbage
    timeLeft_ = finishTime_ - time(NULL);
    return timeLeft_;
}
