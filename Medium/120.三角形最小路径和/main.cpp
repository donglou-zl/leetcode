class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
      const int depth = triangle.size();
      int dp[depth];
      dp[0] = triangle.at(0).at(0);
      for (int i = 1; i < depth; ++i) {
        for (int j = i; j >= 0; --j) {
          if (j == 0) {
            dp[j] = dp[j] + triangle.at(i).at(j);
          } else if (j == i) {
            dp[j] = dp[j-1] + triangle.at(i).at(j);
          } else {
            dp[j] = std::min(dp[j-1], dp[j]) + triangle.at(i).at(j);
          }
        }
      }
      int min_ret = INT_MAX;
      for (int i = 0; i < depth; ++i) {
        min_ret = std::min(min_ret, dp[i]);
      }
      return min_ret;
    }
};