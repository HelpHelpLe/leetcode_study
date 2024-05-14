#include "solution.h"


void Solution::back_tracking(int index, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    res.emplace_back(path);

    for (int i = index; i < m_nums.size(); ++i) {
        path.emplace_back(m_nums[i]);
        back_tracking(i + 1, path, res);
        path.pop_back();
    }
}

std::vector<std::vector<int>> Solution::subsets(std::vector<int> &nums) {
    m_nums = nums;
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(0, path, res);
    return res;
}
