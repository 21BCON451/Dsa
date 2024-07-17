// sum of n
// int sum(int n){
// if(n==0){
//   return 0;
// }
// return n+sum(n-1);
// }

// factorial
//  int fact(Int n)
//  {
//    if (n == 0)
//      return 1;
//    return n * fact(n - 1);
//  }

/// fibonacci
// int fibo(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fibo(n-1)+fibo(n-2);
// }

// digits sum
// int digits(int n){
//   if(n==0) return 0;
//   int digit=n%10;

//   return digit+digits(n/10);
// }

// max sum of any subset
// void subset(vector<int> &arr, int i, int n, int sum, vector<int> &result)
// {
//   if (i == n)
//   {
//     result.push_back(sum);
//     return;
//   }

//   // Do not pick the current element
//   subset(arr, i + 1, n, sum, result);

//   // Pick the current element
//   subset(arr, i + 1, n, sum + arr[i], result);
// }

// vector<int> subsetSums(vector<int> &arr, int n)
// {
//   vector<int> result;
//   subset(arr, 0, n, 0, result);
//   return result;
// }