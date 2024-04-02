#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;

    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    int ans = solution.uniquePathsWithObstacles(obstacleGrid);
    cout << ans << endl;
    return 0;
}