#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    std::vector<std::string> strs = {"10", "0001", "111001", "1", "0"};
    int m = 5;
    int n = 3;
    int ans = solution.findMaxForm(strs, m, n);
    cout << ans << endl;
    return 0;
}
