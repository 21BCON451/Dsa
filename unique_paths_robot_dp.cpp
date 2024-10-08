// through recursuion
//  class Solution {
//  public:
//  int solve(int i, int j){
//      if(i==0 && j==0) return 1;
//      if(i<0 || j<0) return 0;
//      int left=solve(i,j-1);
//      int up=solve(i-1, j);
//      return left+up;
//  }
//      int uniquePaths(int m, int n) {
//          return solve(m-1, n-1);
//      }
//  };

// memoization dono parameter change ho rhe toh 2d dp banegi toh rows lenge m and col n lenge ye size hoga

// class Solution {
// public:
// int solve(int i, int j, vector<vector<int>>&dp){
//     if(i==0 && j==0) return 1;
//     if(i<0 || j<0) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int left=solve(i,j-1,dp);
//     int up=solve(i-1, j,dp);
//     return dp[i][j]=left+up;
// }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return solve(m-1, n-1,dp);
//     }
// };