#include "solution.h"

#include <algorithm>

int Solution::findContentChildren(std::vector<int> &g, std::vector<int> &s) {
    std::sort(g.begin(), g.end());
    std::sort(s.begin(), s.end());

    int i = g.size() - 1;
    int j = s.size() - 1;
    int cnt = 0;

    while (i >= 0 && j >= 0) {
        if (s[j] >= g[i]) {
            --j;
            ++cnt;
        }
        --i;
    }
    return cnt;
}
