#include "solution.h"

int Solution::maxProfit(std::vector<int> &prices) {
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(4, 0));

    // hold the stock
    dp[0][0] = -prices[0];

    int i;
    for (i = 1; i < prices.size(); ++i) {
        // before the hold stock must not be the sell out stock, but can be the others
        dp[i][0] = std::max(dp[i - 1][0], std::max(dp[i - 1][1] - prices[i], dp[i - 1][2] - prices[i]));
        // before the hold sell out stock may be itself or the cold time
        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][2]);
        // before the cold time can only be the sell out
        dp[i][2] = dp[i - 1][3];
        // before the sell out can only be the hold stock
        dp[i][3] = dp[i - 1][0] + prices[i];
    }

    int res = 0;
    for (int j = 0; j <= 3; ++j) {
        res = std::max(res, dp[i - 1][j]);
    }
    return res;
}
