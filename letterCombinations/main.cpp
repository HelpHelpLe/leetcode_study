#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::string digits = "23";
    auto res = solution.letterCombinations(digits);
    
    for (auto s : res) {
        std::cout << s << std::endl;
    }

    return 0;
}
