class Solution {
public:
    int numTrees(int n) {
      int dp[n+1];
      dp[1] = 1;
      dp[2] = 2;
      for (int i = 3; i <= n; ++i) {
        dp[i] = 0;
        for (int j = 1; j <= i; ++j) {
          if (j == 1 || j == i) {
            dp[i] += dp[i -1];
          } else {
            dp[i] += dp[j - 1] * dp[i - j];
          }
        }
      }
      return dp[n];
    }
};