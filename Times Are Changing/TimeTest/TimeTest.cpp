//
//  main.cpp
//  TimeTest
//
//  Created by Vladislav Palant on 3/16/25.
//

#include "TimeFunctions.h"
#include <iostream>
#include <cassert>

int main() {

    assert(convertToMinutes(0, 0) == 0);
    assert(convertToMinutes(1, 0) == 60);
    assert(convertToMinutes(12, 40) == 760);

    assert(minutesDifference(60, 120) == 60);
    assert(minutesDifference(760, 1104) == 344);

    {
        auto [tot, hrs, leftover, dec] = computeInterval(344);
        assert(tot == 344);
        assert(hrs == 5);
        assert(leftover == 44);
       
        assert(dec > 5.7 && dec < 5.74);
    }

    std::cout << "All tests in TimeTest.cpp passed successfully!\n";
    return 0;
}
