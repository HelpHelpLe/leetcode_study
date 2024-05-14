#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> nums{2, 3, 0, 1, 4};
    int res = solution.jump(nums);
    std::cout << res << std::endl;
    return 0;
}
