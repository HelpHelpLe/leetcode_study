#pragma once

#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums);
private:
    int rob(std::vector<int> &nums, int start, int end);
};
