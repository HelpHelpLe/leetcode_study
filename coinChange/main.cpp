#include <iostream>

#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    vector<int> coins{1, 2, 5};
    int amount = 11;
    int ans = solution.coinChange(coins, amount);
    cout << ans << endl;
    return 0;
}
