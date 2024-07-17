// class Solution{
// public:
// bool solve(int i, int n, int sum, vector<int>&arr){
//     if(sum==0) return true;
//     if(i==n) return false;
//     bool notpick=solve(i+1, n, sum, arr);
//     bool pick=solve(i+1, n, sum-arr[i], arr);
//     return pick or notpick;
// }
//     bool isSubsetSum(vector<int>arr, int sum){
//         // code here
//         return solve(0, arr.size(), sum, arr);
//     }
// };

// time complexity =2^n

// // it is an example of DP
// by dp time complexity decreases
// bool solve(int i, int n,  vector<int>&arr,int sum,vector<vector<int>>&dp){
//     if(sum==0) return true;
//     if(sum<0) return false;
//     if(i==n) return false;
//     if(dp[i][sum]!=-1) return dp[i][sum];
//     bool notpick=solve(i+1, n,arr, sum,dp);
//     bool pick=solve(i+1, n, arr,sum-arr[i],dp);//try to make sum = 0
//     return dp[i][sum]= pick or notpick;//hume toh 1 subset chahiye isliye or use krenge
// }
//     bool isSubsetSum(vector<int>arr, int sum){
//         // code here
//         int n=arr.size();
//         //maxrow ka index toh n ho gya aur maxcol ka index sum+1 tk jaayega
//         vector<vector<int>>dp(n,vector<int>(sum+1,-1));
//         return solve(0, n,arr, sum,dp);
//     }