#include <iostream>

#include "solution.h"

int main() {
    Solution solution;
    std::vector<std::vector<int>> points{{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    int res = solution.findMinArrowShots(points);
    std::cout << res << std::endl;
    return 0;
}
