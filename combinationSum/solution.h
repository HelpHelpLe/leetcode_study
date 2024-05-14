#pragma once

#include <vector>

class Solution {
public:
    void back_tracking(std::vector<int> &candidates, int index, int sum, std::vector<int> &path, std::vector<std::vector<int>> &res);

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);

private:
    int m_target;
};
