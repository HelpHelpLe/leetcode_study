#pragma once

#include <unordered_set>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);

private:
    void back_tracking(std::unordered_set<int> &used, std::vector<int> &path, std::vector<std::vector<int>> &res);

private:
    std::vector<int> m_nums;
};
