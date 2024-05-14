#include "solution.h"

int Solution::maxProfit(std::vector<int> &prices) {
    int res = 0;
    for (int i = 1; i < prices.size(); ++i) {
        int num = prices[i] - prices[i - 1];
        if (num > 0) res += num;
    }
    return res;
}
