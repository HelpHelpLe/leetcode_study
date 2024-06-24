#include "solution.h"

// int Solution::maxProfit(std::vector<int> &prices) {
//     int res = 0;
//     for (int i = 1; i < prices.size(); ++i) {
//         int num = prices[i] - prices[i - 1];
//         if (num > 0) res += num;
//     }
//     return res;
// }

int Solution::maxProfit(std::vector<int> &prices) {
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(2, 0));

    // the zero day && has no stock
    dp[0][0] = 0;
    // the zero day && has one stock
    dp[0][1] = -prices[0];

    int i;
    for (i = 1; i < prices.size(); ++i) {
        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
    }

    return std::max(dp[i - 1][0], dp[i - 1][1]);
}
