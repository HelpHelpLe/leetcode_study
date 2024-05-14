#include "solution.h"

#include <algorithm>


void Solution::back_tracking(int index, int sum, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    if (sum >= m_target) {
        if (sum == m_target)
            res.emplace_back(path);
        return;
    }

    std::size_t size = m_candidates.size();
    
    int num = 0;
    int old_num = 0;
    for (int i = index; i < size; ++i) {
        num = m_candidates[i];
        if (old_num == num)
            continue;
        if (sum + num > m_target)
            break;
        path.emplace_back(num);
        back_tracking(i + 1, sum + num, path, res);
        path.pop_back();
        old_num = num;
    }
}


std::vector<std::vector<int>> Solution::combinationSum2(std::vector<int> &candidates, int target) {
    m_target = target;
    m_candidates = candidates;
    std::sort(m_candidates.begin(), m_candidates.end());
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(0, 0, path, res);
    return res;
}
