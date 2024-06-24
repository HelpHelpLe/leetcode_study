#include "solution.h"
#include <algorithm>


int Solution::maxProfit(std::vector<int> &prices) {
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(4, 0));
    // the first hold one stock
    dp[0][0] = -prices[0];
    // the first not hold one stock
    dp[0][1] = 0;
    // the second hold one stock
    dp[0][2] = -prices[0];
    // the second not hold one stock
    dp[0][3] = 0;


    int i;
    for (i = 1; i < prices.size(); ++i) {
        dp[i][0] = std::max(dp[i - 1][0], -prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        dp[i][2] = std::max(dp[i - 1][2], dp[i - 1][1] - prices[i]);
        dp[i][3] = std::max(dp[i - 1][3], dp[i - 1][2] + prices[i]);
    }

    int res = 0;
    for (int j = 0; j <= 3; ++j) {
        res = std::max(res, dp[i - 1][j]);
    }
    return res;
}
