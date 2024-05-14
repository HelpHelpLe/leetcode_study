#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<std::vector<int>> people{
        {7, 0},
        {4, 4},
        {7, 1}, 
        {5, 0},
        {6, 1},
        {5, 2}
    };
    auto res = solution.reconstructQueue(people);
    
    std::cout << "[";
    for (auto &vs : res) {
        std::cout << "[" << vs[0] << ", " << vs[1] << "],";
    }
    std::cout << "]" << std::endl;

    return 0;
}
