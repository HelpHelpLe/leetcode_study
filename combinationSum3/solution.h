#pragma once

#include <vector>

class Solution {
public:
    void back_tracking(int sum, int index, std::vector<int> &path, std::vector<std::vector<int>> &res);
    std::vector<std::vector<int>> combinationSum3(int k, int n);
private:
    int m_k;
    int m_n;
};
