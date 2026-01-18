//
// Created by Motherfucker on 18.01.2026.
//

#include <string>

/**
 * 2283. Check if Number Has Equal Digit Count and Digit Value
 */


bool digitCount(std::string num) {
    int freq[10];

    for (auto c: num) {
        freq[c - '0']++;
    }

    for (int i = 0; i < num.length(); i++) {
        auto number = num[i] - '0';
        if (freq[i] != number) {
            return false;
        }
    }

    return true;
}
