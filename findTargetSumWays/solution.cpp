#include "solution.h"

using namespace std;

int Solution::findTargetSumWays(vector<int>& nums, int target) {
    int sum = 0;
    for (auto num : nums) {
        sum += num;
    }
    int size = nums.size();
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    if (nums[0] <= sum) {
        dp[nums[0]] = 1;
    }
    for (int i = 1; i < size; i++) {
        for (int j = sum; j >= nums[i]; j--) {
            dp[j] += dp[j - nums[i]];
        }
    }
    if (target < 0) {
        target = 0 - target;
    }
    int m = sum - target;
    int x = m / 2;
    if (x + x != m) {
        return 0;
    }
    return dp[x];
}
