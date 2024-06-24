#include "solution.h"
#include <algorithm>

int Solution::maxProfit(std::vector<int> &prices, int fee) {
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(2, 0));
    // 持有股
    dp[0][0] = -prices[0];
    // 不持有股
    dp[0][1] = 0; // 取最大的就是0，多次买进卖出会产生手续费
    
    int i;
    for (i = 1; i < prices.size(); ++i) {
        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][0] + prices[i] - fee);
    }

    return std::max(dp[i - 1][0], dp[i - 1][1]);
}
