#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> nums{1, 7, 4, 9, 2, 5};
    int res = solution.wiggleMaxLength(nums);
    std::cout << res << std::endl;
    return 0;
}
