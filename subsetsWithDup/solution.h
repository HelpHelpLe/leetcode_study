#pragma once

#include <vector>

class Solution {
public:
    void back_tracking(int index, std::vector<int> &path, std::vector<std::vector<int>> &res);
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums);
private:
    std::vector<int> m_nums;
};
