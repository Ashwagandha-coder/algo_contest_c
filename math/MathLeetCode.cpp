//
// Created by Motherfucker on 18.01.2026.
//

#include <vector>

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


/**
 * 728. Self Dividing Numbers
 */

bool isSelfDividingNumber(int number) {
    int num = number;

    while (num != 0) {
        int possible = num % 10;
        if (possible == 0 || number % possible != 0) {
            return false;
        }
        num /= 10;
    }

    return true;
}


std::vector<int> selfDividingNumbers(int left, int right) {
    std::vector<int> result;

    for (int num = left; num <= right; num++) {
        if (isSelfDividingNumber(num)) {
            result.push_back(num);
        }
    }

    return result;
}

/**
 * 371. Sum of Two Integers
 */


int getSum(int a, int b) {
    int x = a;
    int y = b;

    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }

    return x;
}

/**
 * 89. Gray Code
 */

std::pmr::vector<int> grayCode(int n) {
    std::pmr::vector<int> res;
    int size = 1 << n;
    res.reserve(size);

    for (int num = 0; num < size; num++)
    {
        res.push_back(num ^ (num >> 1));
    }

    return res;
}
