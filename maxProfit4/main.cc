#include <iostream>

#include "solution.h"

int main() {

    Solution solution;

    int k = 2;
    std::vector<int> prices{2, 4, 1};
    int res = solution.maxProfit(k, prices);
    
    std::cout << res << std::endl;
    return 0;
}
