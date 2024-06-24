#include "solution.h"
#include <algorithm>

int Solution::lengthOfLIS(std::vector<int> &nums) {
    std::vector<int> dp(nums.size(), 1);

    int res = 1;
    for (int i = 1; i < nums.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] < nums[i]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        res = std::max(res, dp[i]);
    }
    return res;
}
