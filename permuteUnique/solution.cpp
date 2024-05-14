#include "solution.h"

#include <algorithm>

void Solution::back_stracking(std::vector<bool> &used, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    if (path.size() == m_nums.size()) {
        res.emplace_back(path);
        return;
    }

    for (int i = 0; i < m_nums.size(); ++i) {
        if (used[i] || (i > 0 && m_nums[i] == m_nums[i - 1] && !used[i - 1]))
            continue;
        used[i] = true;
        path.emplace_back(m_nums[i]);
        back_stracking(used, path, res);
        path.pop_back();
        used[i] = false;
    }
}

std::vector<std::vector<int>> Solution::permuteUnique(std::vector<int> &nums) {
    m_nums = nums;
    std::sort(m_nums.begin(), m_nums.end());
    std::vector<bool> used(m_nums.size(), false);
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_stracking(used, path, res);
    return res;
}
