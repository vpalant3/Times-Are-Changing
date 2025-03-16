//
//  TimeFunctions.cpp
//  Times Are Changing
//
//  Created by Vladislav Palant on 3/16/25.
//

#include "TimeFunctions.h"

// convertToMinutes: e.g. 12:40 -> 12*60 + 40 = 760
int convertToMinutes(int hour, int minute) {
    return hour * 60 + minute;
}

// minutesDifference: e.g. 760 to 1104 -> 344
int minutesDifference(int startMinutes, int endMinutes) {
    return endMinutes - startMinutes;
}

// computeInterval: returns multiple pieces of data in one tuple
std::tuple<int, int, int, double> computeInterval(int diffMinutes) {
    int totalMins  = diffMinutes;         // e.g. 304
    int hours      = diffMinutes / 60;    // e.g. 5
    int leftover   = diffMinutes % 60;    // e.g. 4
    double decimal = diffMinutes / 60.0;  // e.g. 5.0666...

    return std::make_tuple(totalMins, hours, leftover, decimal);
}
