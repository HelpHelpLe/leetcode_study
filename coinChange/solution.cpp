#include "solution.h"

#include <cmath>


int Solution::coinChange(vector<int> &coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    // dp[j] 表示达到总金额为j所需最少的零钱数
    for (int i = 0; i < coins.size(); ++i) {
        for (int j = 0; j <= amount; ++j) {
            if (j >= coins[i]) {
                dp[j] = std::min(dp[j], dp[j - coins[i]] + 1);
            }
        }
    }
    return dp[amount] == amount + 1 ? -1 : dp[amount];
}
