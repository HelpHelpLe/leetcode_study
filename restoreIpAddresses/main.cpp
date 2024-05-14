#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::string s = "101023";

    auto res = solution.restoreIpAddresses(s);
    
    std::cout << "[";
    for (auto &v : res) {
        std::cout << v << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}
