// public:
// 	int solve(int i, int n, int arr[], int sum, int mySum){
// 	      if(i==n){
// 	    if(sum==mySum) return 1;
// 	   else return 0;
// 	      }
// 	    int notpick=solve(i+1, n, arr, sum,mySum);
// 	    int pick=solve(i+1,n,arr, sum, mySum+arr[i]);
// 	    return pick+notpick;
// 	}
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         solve(0,n, arr, sum,0);
// 	}

// this is also an example of dp