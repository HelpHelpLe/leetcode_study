#include "solution.h"

#include <cmath>

using std::vector;

int Solution::__get_zero_num(const std::string& str) {
    int zero_num = 0;
    ulong size = str.size();
    for (int i = 0; i < size; ++i) {
        if (str[i] == '0') {
            ++zero_num;
        }
    }
    return zero_num;
}


int Solution::findMaxForm(std::vector<std::string>& strs, int m, int n) {
   //  ulong size = strs.size();
   //  vector<vector<vector<int>>> dp(
   //              size, vector<vector<int>>(
   //                      m + 1, vector<int>(
   //                              n + 1, 0
   //                          )
   //                  )
   //          );
   //  // dp[i][j][k] 表示0～i中任选满足至多j个0和至多k个1的子集的最大长度
   //  std::string str = strs[0];
   //  int str_zero_num = __get_zero_num(str);
   //  int str_one_num = str.size() - str_zero_num;
   //  for (int j = 0; j <= m; ++j) {
   //      for (int k = 0; k <= n; ++k) {
   //          if (str_zero_num <= j && str_one_num <= k) {
   //              dp[0][j][k] = 1;
   //          }
   //      }
   //  }

   //  for (int i = 1; i < size; ++i) {
   //      str = strs[i];
   //      str_zero_num = __get_zero_num(str);
   //      str_one_num = str.size() - str_zero_num;
   //      for (int j = 0; j <= m; ++j) {
   //          for (int k = 0; k <= n; ++k) {         
   //              if (str_zero_num <= j && str_one_num <= k) {
   //                  dp[i][j][k] = 
   //                      std::max(dp[i - 1][j][k], dp[i - 1][j - str_zero_num][k - str_one_num] + 1);
   //              } else {
   //                  dp[i][j][k] = dp[i - 1][j][k];
   //              }
   //          }
   //      }
   //  }
   //  return dp[size - 1][m][n];
   //
   //
   //  空间复杂度优化

    ulong size = strs.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    // dp[j][k] 表示满足至多j个0和至多k个1的子集的最大长度
    std::string str = strs[0];
    int str_zero_num = __get_zero_num(str);
    int str_one_num = str.size() - str_zero_num;

    for (int j = 0; j <= m; ++j) {
        for (int k = 0; k <= n; ++k) {
            if (str_zero_num <= j && str_one_num <= k) {
                dp[j][k] = 1;
            }
        }
    }

    for (int i = 1; i < size; ++i) {
        str = strs[i];
        str_zero_num = __get_zero_num(str);
        str_one_num = str.size() - str_zero_num;
        for (int j = m; j >= 0; --j) {
            for (int k = n; k >= 0; --k) {
                if (str_zero_num <= j && str_one_num <= k) {
                    dp[j][k] = std::max(dp[j][k], dp[j - str_zero_num][k - str_one_num] + 1);
                }
            }
        }
    }

    return dp[m][n];
}
