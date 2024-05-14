#pragma once

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums);

private:
    void back_stracking(std::vector<bool> &used, std::vector<int> &path, std::vector<std::vector<int>> &res);

private:
    std::vector<int> m_nums;
};
