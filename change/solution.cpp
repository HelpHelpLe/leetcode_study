#include "solution.h"

int Solution::change(int amount, vector<int> &coins) {
    size_t size = coins.size();
    
    vector<int> dp(amount + 1, 0);
    // dp[j] 表示总金额为j的种数
    
    int coin = coins[0];
    for (int j = 0; j <= amount; ++j) {
        dp[j] = (j % coin == 0);
    }
    
    int k = 0;
    for (int i = 1; i < size; ++i) {
        coin = coins[i];
        for (int j = amount; j >= 0; --j) {
            k = j - coin;
            while (k >= 0) {
                dp[j] += dp[k];
                k = k - coin;
            }
        }
    }
    return dp[amount];
}
