#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> prices{1, 3, 2, 8, 4, 9};
    int fee = 2;
    int res = solution.maxProfit(prices, fee);
    std::cout << res << std::endl;
    return 0;
}
