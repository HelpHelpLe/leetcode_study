#include <iostream>

#include "solution.h"

int main() {
    Solution solution;

    std::vector<int> g{1, 2};
    std::vector<int> s{1, 2, 3};
    int res = solution.findContentChildren(g, s);
    std::cout << res << std::endl;
    return 0;
}
