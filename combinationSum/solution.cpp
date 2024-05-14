#include "solution.h"
#include <vector>

void Solution::back_tracking(std::vector<int> &candidates, int index, int sum, std::vector<int> &path, std::vector<std::vector<int>> &res) {
    if (sum >= m_target) {
        if (sum == m_target)
            res.emplace_back(path);
        return;
    }

    for (int i = index; i < candidates.size(); ++i) {
        int num = candidates[i];
        path.emplace_back(num);
        back_tracking(candidates, i, sum + num, path, res);
        path.pop_back();
    }
}


std::vector<std::vector<int>> Solution::combinationSum(std::vector<int> &candidates, int target) {
    m_target = target;
    std::vector<int> path;
    std::vector<std::vector<int>> res;
    back_tracking(candidates, 0, 0, path, res);
    return res;
}
