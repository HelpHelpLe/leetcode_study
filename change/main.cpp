#include <iostream>

#include "solution.h"

using namespace std;


int main() {
    Solution solution;
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    int ans = solution.change(amount, coins);
    cout << ans << endl;
    return 0;
}
