// past ko yaad rkho aur aage bdh jaao

// dp tabulation(bottom up) and memoization(recursive)(top-down)

// convert recursive into memoization

// //fibonacci ka recursive approach
// int fibo(int n, vector<int>&dp){
// if(n==0) return 0;
// if(n==1) return 1;
// if(dp[n]!=-1) return dp[n];
// int a= fibo(n-1,dp);
// int b=fibo(n-2,dp);
// return dp[n]=a+b;
//}
// int main(){
//   int n=5;
//   vector<int>dp(n+1,-1);

//   //ab store krwane ke liye vector banana hota h
// cout<<fibo(n,dp)<<endl;
// }
//
// steps:
// store krwane ke liye vector banana hota h
//  array ka size =largest index(n+1)
// base case handle

// tabulation mein recursive hota nhi
//  convert memoization into tabulation

// int main(){
//   int n=5;
//   vector<int>dp(n+1,-1);
// dp[0]=1;
// dp[1]=1;
// for(int i=2; i<=n; i++){
//   int a=dp[i-1];
//   int b=dp[i-2];
//    dp[i]=a+b;
//    cout<<dp[n]<<endl;
//   }
// }

// space optimization code
//  int main(){
//    int n=5;
//    vector<int>dp(n+1,-1);
//  //int prev2=0;
//  int prev1=1;
//  for(int i=2; i<=n;i++){
//    int a =prev1+ prev2;
//    prev2=prev1;
//    prev1=a;
//  }
//  cout<<prev1<<endl;
//  }