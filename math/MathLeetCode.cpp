//
// Created by Motherfucker on 18.01.2026.
//

#include "PerfectNumbersH.h"

/**
 * 507. Perfect Number
 * Recursive Solution
 */


bool helper(int num, int sum, int index) {
    if (num == 1) {
        return false;
    }

    if (index * index <= num) {
        if (num % index == 0) {
            sum += index;
            if (index != (num / index)) {
                sum += (num / index);
            }
        }
        index++;
        return helper(num, sum, index);
    }

    return sum == num;
}

bool checkPerfectNumber(int num) {
    return helper(num, 1, 2);
}
