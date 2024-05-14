#include "solution.h"

#include <algorithm>


void Solution::back_tracking(int index, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    res.emplace_back(path);

    for (int i = index; i < m_nums.size(); ++i) {
        if (i > index && m_nums[i] == m_nums[i - 1])
            continue;
        path.emplace_back(m_nums[i]);
        back_tracking(i + 1, path, res);
        path.pop_back();
    }
}

std::vector<std::vector<int>> Solution::subsetsWithDup(std::vector<int> &nums) {
    m_nums = nums;
    std::sort(m_nums.begin(), m_nums.end());
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(0, path, res);
    return res;
}
