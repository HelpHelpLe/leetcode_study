#include "solution.h"
#include <cmath>
#include <iostream>

bool Solution::canPartition(vector<int>& nums) {
    int sum = 0;
    for (auto num : nums) {
        sum += num;
    }
    
    if (sum % 2 == 1) {
        return false;
    }
    
    int target = sum / 2;
    int size = nums.size();

    vector<int> dp(target, 0);

    for (int i = 0; i < size; i++) {
        for (int j = target; j >= nums[i]; j--) {
            dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
        }
    }
    return dp[target] == target;

    // vector<vector<bool>> dp(size, vector<bool>(target + 1, false));
    
    // dp[0][nums[0]] = true;
    
    // for (int i = 0; i < size; i++) {
    //     dp[i][0] = true;
    // }

    // for (int i = 1; i < size; i++) {
    //     for (int j = 1; j <= target; j++) {
    //         if (nums[i] <= j) {
    //             dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i]];
    //         } else {
    //             dp[i][j] = dp[i - 1][j];
    //         }
    //     }
    // }
    // for (auto vs : dp) {
    //     for (auto v : vs) {
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // return dp[size - 1][target];
}