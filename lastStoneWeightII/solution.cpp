#include "solution.h"
#include <cmath>

using namespace std;

int Solution::lastStoneWeightII(vector<int>& stones) {
    int sum = 0;
    
    for (auto stone : stones) {
        sum += stone;
    }

    int target = sum / 2;
    int size = stones.size();
    vector<int> dp(target + 1, 0);
    for (int i = 0; i < size; i++) {
        for (int j = target; j >= stones[i]; j--) {
            dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
        }
    }
    return sum - dp[target] - dp[target];
}