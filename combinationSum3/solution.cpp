#include "solution.h"

void Solution::back_tracking(int sum, int index, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    // 终止条件
    if (path.size() == m_k) {
        if (sum == m_n) {
            res.push_back(path);
        }
        return;
    }

    int bound = 10 - m_k + path.size();
    if (bound > m_n - sum) {
        bound = m_n -sum;
    }
    int i = index;
    while (i <= bound) {
        path.push_back(i);
        back_tracking(sum + i, i + 1, path, res);
        path.pop_back();
        ++i;
    }
}

std::vector<std::vector<int>> Solution::combinationSum3(int k, int n) {
    m_k = k;
    m_n = n;
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(0, 1, path, res);
    return res;
}
