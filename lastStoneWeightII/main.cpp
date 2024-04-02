#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    int ans = solution.lastStoneWeightII(stones);
    cout << ans << endl;
    return 0;
}