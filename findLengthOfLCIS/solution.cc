#include "solution.h"
#include <algorithm>

int Solution::findLengthOfLCIS(std::vector<int> &nums) {
    std::vector<int> dp(nums.size(), 1);

    int res = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        }
        res = std::max(res, dp[i]);
    }
    return res;
}
