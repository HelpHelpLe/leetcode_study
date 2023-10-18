#include <iostream>
#include "solution.h"
using namespace std;

int main()
{
    Solution solution = Solution();
    vector<int> height = vector<int>
    {
        1, 8, 6, 2, 5, 4, 8, 3, 7
    };
    int ans = solution.maxArea(height);
    cout << ans << endl;
    return 0;
}
