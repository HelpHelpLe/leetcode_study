#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    int k = 3;
    int n = 9;
    auto res = solution.combinationSum3(k, n);
    
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
