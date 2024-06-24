#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> nums{2, 3, 2};
    int res = solution.rob(nums);
    
    std::cout << res << std::endl;
    return 0;
}
