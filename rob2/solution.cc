#include "solution.h"
#include <algorithm>

int Solution::rob(std::vector<int> &nums) {
    int size = nums.size();
    if (size == 1) return nums[0];
    if (size == 2) return std::max(nums[0], nums[1]);
    
    int res = rob(nums, 1, size - 1);
    res = std::max(res, rob(nums, 0, size - 2));
    return res;
}


int Solution::rob(std::vector<int> &nums, int start, int end) {
    std::vector<int> dp(end - start + 1, 0);

    dp[0] = nums[start];
    dp[1] = std::max(nums[start], nums[start + 1]);

    for (int i = 2; i <= end - start; ++i) {
        dp[i] = std::max(dp[i - 2] + nums[start + i], dp[i - 1]);
    }

    return dp[end - start];
}
