#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> candidates{8, 7, 4, 3};
    int target = 11;
    auto res = solution.combinationSum(candidates, target);

    std::cout << "[" << std::endl;
    for (auto vs : res) {
        std::cout << "  [";
        for (auto v : vs) {
            std::cout << v << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    return 0;
}
