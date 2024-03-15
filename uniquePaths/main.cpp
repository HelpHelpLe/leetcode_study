#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    int m = 3;
    int n = 7;
    int ans = solution.uniquePaths(m, n);
    cout << ans << endl;
    return 0;
}