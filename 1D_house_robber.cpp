// ya tohh chori kr skte ya nhi
// do possibilities // 2 recursive call
// base case// agr 1 hi ghr h toh ussi mein// agr do ghr h toh jisme jyada saman h
// int solve(int i, vector<int>&arr){
//     if(i==0) return arr[0];//ek hi ghr h
//     if(i==1) return max(arr[0],arr[1]);// do ghr ho
//     int choriNhiKi=solve(i-1,arr);
//     int choriKi=arr[i]+solve(i-2,arr);
//     return max(choriNhiKi,choriKi);
// }
//     int rob(vector<int>& arr) {
//         int n=arr.size();
//         return solve(n-1,arr);

// };

// memoization//solve mein do pass ho rhe lekin change sirf i ho eha toh 1d vector dp banega

// int solve(int i, vector<int>&arr, vector<int>&dp){
//     if(i==0) return arr[0];//ek hi ghr h
//     if(i==1) return max(arr[0],arr[1]);// do ghr ho
//     if(dp[i]!=-1) return dp[i];
//     int choriNhiKi=solve(i-1,arr,dp);
//     int choriKi=arr[i]+solve(i-2,arr,dp);
//     return dp[i]=max(choriNhiKi,choriKi);
// }
//     int rob(vector<int>& arr) {
//         int n=arr.size();
//         vector<int>dp(n,-1);
//         return solve(n-1,arr,dp);

//     }
