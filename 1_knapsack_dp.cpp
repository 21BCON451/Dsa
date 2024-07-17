// int solve(int i, int n, int w, int wt[], int val[]){
//       if(w==0) return 0;
//       if(i==n) return 0;
//       int notpick=solve(i+1,n, w, wt, val);
//       int pick=0;
//       if(w>=wt[i]){
//           pick=val[i]+solve(i+1, n, w-wt[i],wt,val);
//       }
//       return max(notpick,pick);
//   }
//   //Function to return max value that can be put in knapsack of capacity W.
//   int knapSack(int w, int wt[], int val[], int n)
//   {
//      // Your code here
//      //do base case honge ya toh capacity khtm ho gyi ya phir itemshi khtm ho gye
//      return solve(0,n,w,wt,val);
//   }

// memoization

// int solve(int i, int n, int w, int wt[], int val[],vector<vector<int>>&dp){
//         if(w==0) return 0;
//         if(i==n) return 0;
//         if(dp[i][w]!=-1) return dp[i][w];
//         int notpick=solve(i+1,n, w, wt, val,dp);
//         int pick=0;
//         if(w>=wt[i]){
//             pick=val[i]+solve(i+1, n, w-wt[i],wt,val,dp);
//         }
//         return dp[i][w]= max(notpick,pick);
//     }
//     //Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int w, int wt[], int val[], int n)
//     {
//        // Your code here
//        //do base case honge ya toh capacity khtm ho gyi ya phir itemshi khtm ho gye
//        vector<vector<int>>dp(n,vector<int>(w+1,-1));
//        return solve(0,n,w,wt,val,dp);
//     }