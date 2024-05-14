#include "solution.h"
#include <algorithm>

int Solution::findMinArrowShots(std::vector<std::vector<int>> &points) {
    std::sort(
        points.begin(), points.end(),
        [](const std::vector<int> &v1, const std::vector<int> &v2) -> bool {
            return v1[0] < v2[0];
        });

    int cnt = 1;
    int end = points[0][1];
    for (int i = 1; i < points.size(); ++i) {
        if (end >= points[i][0]) {
            end = std::min(end, points[i][1]);
        } else {
            ++cnt;
            end = points[i][1];
        }
    }
    return cnt;
}
