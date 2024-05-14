#include "solution.h"

#include <unordered_set>


void Solution::back_tracking(int index, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    std::size_t size = path.size();
    if (size > 1) {
        res.emplace_back(path);
    }

    std::unordered_set<int> set;
    int num = 0;

    for (int i = index; i < m_nums.size(); ++i) {
        num = m_nums[i];
        if ((size > 0 && path[size - 1] > num) || set.count(num))
            continue;
        path.emplace_back(num);
        set.insert(num);
        back_tracking(i + 1, path, res);
        path.pop_back();
    }
}

std::vector<std::vector<int>> Solution::findSubsequences(std::vector<int> &nums) {
    m_nums = nums;
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(0, path, res);
    return res;
}
