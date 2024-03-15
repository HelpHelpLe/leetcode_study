#include "solution.h"

#include <vector>
#include <cmath>

using namespace std;
// dp[i] 表示将i拆分为2个及以上的整数的最大乘积
// dp[j] * (i - j) 表示将 i = i + i - j 拆分为3个及以上的整数的某一个乘积
// 递推公式其实是：拆分为2个及以上的整数的最大乘积 = 拆分为2个以上的整数的最大乘积 和 拆分为3个及以上的整数的最大乘积 的最大值
// >= 拆分为 = 和 >
int Solution::integerBreak(int n) {
    vector<int> dp(n + 1, 1);
    int t = 0;
    for (int i = 3; i <= n; i++) {
        for (int j = 2; j < i; j++) {
            t = max(j * (i - j), dp[j] * (i - j));
            dp[i] = max(dp[i], t);
        }
    }
    return dp[n];
}