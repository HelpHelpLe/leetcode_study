#include "solution.h"
#include <algorithm>

int Solution::largestSumAfterKNegations(std::vector<int> &nums, int k) {
    std::sort(nums.begin(), nums.end());

    int min_index = 0;

    while (k > 0) {
        nums[min_index] = -nums[min_index];

        if (min_index < nums.size() - 1 
                && nums[min_index] > nums[min_index + 1]) ++min_index;

        --k;
    }
        
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}
