#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> prices{3, 3, 5, 0, 0, 3, 1, 4};
    int res = solution.maxProfit(prices);
    
    std::cout << res << std::endl;
    return 0;
}
