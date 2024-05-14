#pragma once

#include <vector>

class Solution {
public:
    void back_tracking(int index, int sum, std::vector<int> &path, std::vector<std::vector<int>> &res);

    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target);

private:
    std::vector<int> m_candidates;
    int m_target;
};
