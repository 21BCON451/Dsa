// class Solution {
// public:
// int solve(int i, int j, int n,vector<vector<int>>& arr){
//     if(i==n) return arr[i][j];
//     int down=solve(i+1, j, n, arr);
//     int dia=solve(i+1, j+1, n, arr);
//     return arr[i][j]+min(down, dia);
// }
//     int minimumTotal(vector<vector<int>>& arr) {
//         // 0,0 se start karo aur do possibility hogi down or diagnol phir aise krte jaao
//         int n=arr.size();
//         //col nhi bta skte
//         return solve(0,0,n-1,arr);
//     }
// };

// ///memoization
// class Solution {
// public:
// int solve(int i, int j, int n,vector<vector<int>>& arr,vector<vector<int>>&dp){
//     if(i==n) return arr[i][j];
//     if(dp[i][j]!=-1) return dp[i][j];
//     int down=solve(i+1, j, n, arr,dp);
//     int dia=solve(i+1, j+1, n, arr,dp);
//     return dp[i][j]=arr[i][j]+min(down, dia);
// }
//     int minimumTotal(vector<vector<int>>& arr) {
//         // 0,0 se start karo aur do possibility hogi down or diagnol phir aise krte jaao
//         int n=arr.size();
//         vector<vector<int>>dp(n, vector<int>(n,-1));
//         //col nhi bta skte
//         return solve(0,0,n-1,arr,dp);
//     }
// };