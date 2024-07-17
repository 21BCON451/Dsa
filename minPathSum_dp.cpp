// class Solution {
// public:
// int solve(int i, int j, vector<vector<int>>&arr){
//     if(i==0 && j==0) return arr[i][j];
//     if(i<0 || j<0) return 1e9;
//     int left=arr[i][j]+solve(i-1, j, arr);//kyunki iska path bhi add hoyega
//     int up=arr[i][j]+solve(i,j-1,arr);
//     return min(left+up);
// }
//     int minPathSum(vector<vector<int>>& arr) {
//         int n=arr.size();
//         int m=arr[0].size();
//        return solve(n-1, m-1, arr);
//     }
// };

/// memoization
// class Solution {
// public:
// int solve(int i, int j, vector<vector<int>>&arr,vector<vector<int>>&dp){
//     if(i==0 && j==0) return arr[i][j];
//     if(i<0 || j<0) return 1e9;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int left=arr[i][j]+solve(i-1, j, arr,dp);//kyunki iska path bhi add hoyega
//     int up=arr[i][j]+solve(i,j-1,arr,dp);
//     return dp[i][j]= min(left,up);
// }
//     int minPathSum(vector<vector<int>>& arr) {
//         int n=arr.size();
//         int m=arr[0].size();
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//        return solve(n-1, m-1, arr,dp);
//     }
// };