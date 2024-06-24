#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> prices{3, 5, 1, 7, 2};
    int res = solution.maxProfit(prices);

    std::cout << res << std::endl;
    return 0;
}
