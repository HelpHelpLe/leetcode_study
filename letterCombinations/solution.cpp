#include "solution.h"


Solution::Solution() {
    digit_letter[0] = "";
    digit_letter[1] = "";
    digit_letter[2] = "abc";
    digit_letter[3] = "def";
    digit_letter[4] = "ghi";
    digit_letter[5] = "jkl";
    digit_letter[6] = "mno";
    digit_letter[7] = "pqrs";
    digit_letter[8] = "tuv";
    digit_letter[9] = "wxyz";
}

void Solution::back_tracking(int index, std::string path, std::vector<std::string> &res) {
    // 终止条件
    if (index == m_digits.size()) {
        res.push_back(path);
        return;
    }

    std::string &letter = digit_letter[m_digits[index] - '0'];

    for (char c : letter) {
        back_tracking(index + 1, path + c, res);
    }
}

std::vector<std::string> Solution::letterCombinations(std::string digits) {
    if (digits.empty()) {
        return {};
    }
    m_digits = digits;
    std::vector<std::string> res;
    back_tracking(0, "", res);
    return res;
}
