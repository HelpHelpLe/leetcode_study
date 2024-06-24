#include "solution.h"


// int Solution::maxProfit(std::vector<int> &prices) {
//     // dp[j] 表示在 0~j 天买卖股票得到最大利润
//     if (prices.size() == 1) return 0;
// 
//     std::vector<int> dp(prices.size(), 0);
//     std::vector<int> mins(prices.size(), INT_MAX);
// 
//     mins[0] = prices[0];
//     for (int i = 1; i < prices.size(); ++i) {
//         mins[i] = std::min(mins[i - 1], prices[i]);
//     }
// 
//     for (int i = 1; i < prices.size(); ++i) {
//         dp[i] = std::max(dp[i - 1], prices[i] - mins[i - 1]);
//     }
// 
//     return dp[prices.size() - 1];
// }

int Solution::maxProfit(std::vector<int> &prices) {
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(2, 0));

    // the zero day && has no stock
    dp[0][0] = 0;
    // the zero day && has one stock
    dp[0][1] = -prices[0];

    for (int i = 1; i < prices.size(); ++i) {
        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], -prices[i]);
    }

    return dp[prices.size() - 1][0];
}
