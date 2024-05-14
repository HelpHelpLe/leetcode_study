#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::string s = "aab";
    auto res = solution.partition(s);

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
