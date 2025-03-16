//
//  main.cpp
//  Times Are Changing
//
//  Created by Vladislav Palant on 3/16/25.
//

#include <iostream>
#include <tuple>
#include "TimeFunctions.h"

int main() {
    std::cout << "Welcome to the Time Interval Calculation Program!\n(Please use Military Time!)\n\n";

    int hour1, minute1;
    char colon;
    std::cout << "What is your first time?(Hour:Minute)  ";
    std::cin >> hour1 >> colon >> minute1;

    int hour2, minute2;
    std::cout << "\nWhat is your second time?(Hour:Minute)  ";
    std::cin >> hour2 >> colon >> minute2;

    int total1 = convertToMinutes(hour1, minute1);
    int total2 = convertToMinutes(hour2, minute2);

    int diff = minutesDifference(total1, total2);

    std::tuple<int, int, int, double> intervalData = computeInterval(diff);

    int totalMins   = std::get<0>(intervalData);
    int hrs         = std::get<1>(intervalData);
    int leftoverMin = std::get<2>(intervalData);
    double decHours = std::get<3>(intervalData);

    std::cout << "\nThe time interval can be written as:\n\n";

    std::cout << "  * " << totalMins << " minutes\n";
   
    std::cout << "  * " << hrs << " hours and " << leftoverMin << " minutes.\n";

   
    double roundedDec = static_cast<int>(decHours * 100 + 0.5) / 100.0;
    std::cout << "  * " << roundedDec << " hours\n\n";

    std::cout << "Thank you for using the Time Interval Calculation Program.\n";
    return 0;
}
