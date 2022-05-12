#include "Countdown.h"

void Countdown::startCountdown(int seconds)
{
    startTime_ = time(NULL)+seconds;
    timeLeft_ = seconds;
}

int Countdown::getTimeLeft()
{
    timeLeft_ = startTime_ - time(NULL);
    return timeLeft_;
}
