#include <iostream>
#include <vector>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> nums{1, 3, 5, 4, 7};
    int res = solution.findLengthOfLCIS(nums);
    std::cout << res << std::endl;
    return 0;
}
