#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> nums{4, 10, 4, 3, 8, 9};
    int res = solution.lengthOfLIS(nums);
    std::cout << res << std::endl;
    return 0;
}
