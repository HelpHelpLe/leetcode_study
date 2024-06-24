#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> prices{1, 2, 3, 0, 2};
    int res = solution.maxProfit(prices);
    std::cout << res << std::endl;
    return 0;
}
