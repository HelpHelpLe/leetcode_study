#include "solution.h"


bool Solution::wordBreak(std::string s, std::vector<std::string> &wordDict) {
    std::size_t size = s.size();
    std::size_t words_num = wordDict.size();
    
    std::vector<std::vector<bool>> dp(size, std::vector<bool>(size + 1, false));
    
    for (int i = 0; i < size; ++i) {
        dp[i][i] = true;
    }

    std::string word;
    std::size_t word_size;
    std::size_t pos;
    for (int k = 0; k < words_num; ++k) {
        word = wordDict[k];
        word_size = word.size();
        for (int j = 0; j <= size; ++j) {
            for (int i = 0; i < size - j; ++i) {
                
            }
        }
    }


    return dp[0][size];
}


bool Solution::wordBreak(const std::string& s, std::vector<std::string>& wordDict, int i, int j) {
    if (i >= j) {
        return true;
    }
    std::string word;
    std::size_t pos;
    std::size_t size;
    for (int k = 0; k < wordDict.size(); ++k) {
        word = wordDict[k];
        size = word.size();
        pos = s.find(word, i);
        if (pos != s.npos && pos + size <= j) {
            if (wordBreak(s, wordDict, i, pos) && wordBreak(s, wordDict, pos + size, j)) {
                return true;
            }
        }
    }
    return false;
}
