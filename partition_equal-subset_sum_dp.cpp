// class Solution {
// public:
// bool solve(int i, int total_sum, vector<int>& arr, vector<vector<int>>& dp) {
//         if (total_sum == 0) return true;
//         if (total_sum < 0 || i >= arr.size()) return false;
//         if (dp[i][total_sum] != -1) return dp[i][total_sum];

//         bool notPick = solve(i + 1, total_sum, arr, dp);
//         bool pick = false;
//         if (total_sum >= arr[i]) {
//             pick = solve(i + 1, total_sum - arr[i], arr, dp);
//         }

//         return dp[i][total_sum] = pick || notPick;
//     }

//     bool canPartition(vector<int>& arr) {
//         int n = arr.size();
//         int total_sum = 0;
//         for (int i = 0; i < n; i++) {
//             total_sum += arr[i];
//         }

//         if (total_sum % 2 != 0) {
//             return false;
//         }

//         int target = total_sum / 2;
//         vector<vector<int>> dp(n, vector<int>(target + 1, -1));
//         return solve(0, target, arr, dp);
//     }
// };