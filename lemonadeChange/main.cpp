#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> bills{5, 10, 5, 20};
    bool res = solution.lemonadeChange(bills);
    std::cout << res << std::endl;
    return 0;
}
