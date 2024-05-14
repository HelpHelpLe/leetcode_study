#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> nums{2, -3, -1, 5, -4};
    int k = 2;
    int res = solution.largestSumAfterKNegations(nums, k);
    
    std::cout << res << std::endl;
    return 0;
}
