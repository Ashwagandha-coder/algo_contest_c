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
        if (possible == 0 || number % possible != 0)
        {
            return false;
        }
        num /= 10;
    }

    return true;
}


std::vector<int> selfDividingNumbers(int left, int right) {
    std::vector<int> result;

    for (int num = left; num <= right; num++)
    {
        if (isSelfDividingNumber(num))
        {
            result.push_back(num);
        }
    }

    return result;
}

/**
 * 2283. Check if Number Has Equal Digit Count and Digit Value
 */

bool digitCount(std::string num) {
    int freq[10];

    for (auto c: num)
    {
        freq[c - '0']++;
    }

    for (int i = 0; i < num.length(); i++)
    {
        auto number = num[i] - '0';
        if (freq[i] != number)
        {
            return false;
        }
    }

    return true;
}




