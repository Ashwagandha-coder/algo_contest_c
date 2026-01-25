//
// Created by Motherfucker on 25.01.2026.
//

#include "ArrayLeetCode.h"

#include <vector>


/**
 * 3818. Minimum Prefix Removal to Make Array Strictly Increasing
 */
int minimumPrefixLength(std::vector<int> &nums) {
    if (nums.size() == 1) {
        return 0;
    }

    int minLen = nums.size() - 1;
    int i = nums.size() - 1;

    while (i >= 1) {
        if (nums[i] > nums[i - 1]) {
            minLen--;
        } else {
            break;
        }
        i--;
    }

    return minLen;
}
