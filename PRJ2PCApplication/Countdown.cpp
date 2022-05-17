#include "Countdown.h"

void Countdown::startCountdown(const int seconds)
{
    finishTime_ = time(NULL)+seconds;
    timeLeft_ = seconds;
}

int Countdown::calculateCurrentTimeLeft()
{
    //changes timeLeft_ to current time left
    timeLeft_ = finishTime_ - time(NULL);
    return timeLeft_;
}
