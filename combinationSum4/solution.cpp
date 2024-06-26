#include "solution.h"

#include <climits>


int Solution::combinationSum4(vector<int>& nums, int target) {
    vector<int> dp(target + 1, 0);
    dp[0] = 1;

    for (int j = 0; j <= target; ++j) {
        for (int i = 0; i < nums.size(); ++i) {
            if (j >= nums[i] && dp[j] < INT_MAX - dp[j - nums[i]])
                dp[j] += dp[j - nums[i]];
        }
    }

    return dp[target];
}
