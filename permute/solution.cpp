#include "solution.h"


void Solution::back_tracking(std::unordered_set<int> &used, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    if (used.size() == m_nums.size()) {
        res.emplace_back(path);
        return;
    }

    for (int num : m_nums) {
        if (used.count(num))
            continue;
        used.insert(num);
        path.emplace_back(num);
        back_tracking(used, path, res);
        path.pop_back();
        used.erase(used.find(num));
    }
}

std::vector<std::vector<int>> Solution::permute(std::vector<int> &nums) {
    m_nums = nums;
    std::unordered_set<int> used;
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(used, path, res);
    return res;
}
