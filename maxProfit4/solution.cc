#include "solution.h"
#include <algorithm>

int Solution::maxProfit(int k, std::vector<int> &prices) {
    int size = k << 1;
    std::vector<std::vector<int>> dp(prices.size(), std::vector<int>(size, 0));

    int j = 0;
    while (j < size) {
        dp[0][j++] = -prices[0];
        dp[0][j++] = 0;
    }

    int i;
    for (i = 1; i < prices.size(); ++i) {
        dp[i][0] = std::max(dp[i - 1][0], -prices[i]);
        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        j = 2;
        while (j < size) {
            dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - 1] - prices[i]);
            ++j;
            dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - 1] + prices[i]);
            ++j;
        }
    }

    int res = 0;
    for (j = 0; j < size; ++j) {
        res = std::max(res, dp[i - 1][j]);
    }
    return res;
}
