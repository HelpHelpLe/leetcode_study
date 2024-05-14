#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> candidates{10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    auto res = solution.combinationSum2(candidates, target);
    
    std::cout << "[" << std::endl;
    for (auto &vs : res) {
        std::cout << "  [";
        for (auto &v : vs) {
            std::cout << v << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    return 0;
}
