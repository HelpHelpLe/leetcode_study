#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> gas{3, 2, 4};
    std::vector<int> cost{4, 3, 3};
    int res = solution.canCompleteCircuit(gas, cost);
    
    std::cout << res << std::endl;
    return 0;
}
