#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> nums{3, 3, 0, 3};
    auto res = solution.permuteUnique(nums);
    
    for (auto &vs : res) {
        for (auto &v : vs) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
