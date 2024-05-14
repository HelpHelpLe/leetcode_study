#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = solution.maxSubArray(nums);
    std::cout << res << std::endl;
    return 0;
}
