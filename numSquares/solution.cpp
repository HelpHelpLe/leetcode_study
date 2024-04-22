#include "solution.h"

#include <cmath>


int Solution::numSquares(int n) {
    // target = n
    // 物品1, 4, 9, ... , ceil(sqrt(n)) ^ 2
    int bound = ceil(sqrtl(n));
    std::vector<int> dp(n + 1, n + 1);
    dp[0] = 0;
    int num;
    for (int i = 1; i <= bound; ++i) {
        num = i * i;
        for (int j = num; j <= n; ++j) {
            if (j >= num) {
                dp[j] = std::min(dp[j], dp[j - num] + 1);
            }
        }
    }
    
    return dp[n] == n + 1 ? -1 : dp[n];
}
