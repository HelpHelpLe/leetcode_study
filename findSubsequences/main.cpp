#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> nums{4, 6, 7, 7};
    auto res = solution.findSubsequences(nums);

    for (auto &vs : res) {
        for (auto &v : vs) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
