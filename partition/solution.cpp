#include "solution.h"

bool Solution::is_palindrome(const std::string &s) {
	int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if(s[l] != s[r]) break;
        ++l;
        --r;
    }
    return l >= r;
}

void Solution::back_tracking(int index, std::vector<std::string> &path, std::vector<std::vector<std::string>> &res) {
    if (index == m_s.size()) {
        res.emplace_back(path);
        return;
    }

    int len = m_s.size() - index;

    for (int l = 1; l <= len; ++l) {
        std::string s = m_s.substr(index, l);
        if (!is_palindrome(s))
            continue;
        path.emplace_back(s);
        back_tracking(index + l, path, res);
        path.pop_back();
    }
}

std::vector<std::vector<std::string>> Solution::partition(std::string s) {
    m_s = s;
    std::vector<std::string> path;
    std::vector<std::vector<std::string>> res;
    back_tracking(0, path, res);
    return res;
}
