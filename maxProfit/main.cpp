#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    int res = solution.maxProfit(prices);
    std::cout << res << std::endl;
    return 0;
}
