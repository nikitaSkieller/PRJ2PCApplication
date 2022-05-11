#include "Countdown.h"

void Countdown::startCountdown(int seconds)
{
    startTime_ = time(NULL)+seconds;
    timeLeft = seconds;
}

int Countdown::getTimeLeft()
{
    timeLeft = startTime_ - time(NULL);
    return timeLeft;
}
