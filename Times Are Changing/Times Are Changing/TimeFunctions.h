//
//  TimeFunctions.h
//  Times Are Changing
//
//  Created by Vladislav Palant on 3/16/25.
//

#ifndef TIMEFUNCTIONS_H
#define TIMEFUNCTIONS_H

#include <tuple>

int convertToMinutes(int hour, int minute);

// Returns the difference (in minutes) between two times on the same day.
int minutesDifference(int startMinutes, int endMinutes);

// Returns a tuple of (totalMinutes, hours, leftoverMinutes, decimalHours)
// given a difference in minutes.
std::tuple<int, int, int, double> computeInterval(int diffMinutes);

#endif
