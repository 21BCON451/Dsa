
// class Solution {
// public:
//  int solve(int i, int j, vector<vector<int>>&arr, vector<vector<int>>&dp){
//     //pehle check karo ki aap grid mein ho ya nhi
//      if(i<0|| j<0) return 0;
//           //then checked blocked cell then

//      if(arr[i][j]==1) return 0;
//     if(i==0 && j==0) return 1;
//    if(dp[i][j]!=-1) return dp[i][j];

//     int left=solve(i,j-1, arr,dp);
//     int up=solve(i-1, j, arr,dp);
//     return dp[i][j]=left+up;
//  }
//     int uniquePathsWithObstacles(vector<vector<int>>& arr) {
//       //agr obstacle grid mein 1 likhah toh obstcale h

//       //base case mein ek aur case add kr do ki agr i, j =1 h toh obstacle h

//       int n=arr.size();
//       int m=arr[0].size();
//       vector<vector<int>>dp(n,vector<int>(m,-1));
//       return solve(n-1, m-1, arr,dp);
//     }
// };