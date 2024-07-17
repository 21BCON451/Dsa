// ek array ka koi bhi continuous part ko subarray khenge
// 1234
// 12 23 34 123 234 1234

// subsequence  subaarays toh subsequence honge saath mein 1324 14 ye bhi honge

// array is given then return max sum of a subarray
//     arr = {-2, -3, 4, -1, -2, 1, 5, -3}

// brute approach={1,2,3,4}
//  sum=0+1=1+2=3+3=6+4=10 (for 1)
//  0+2=2+3=5+4=9 (for 2)

// long long maxSubarraySum(int arr[], int n){
//  long long ans=arr[0];
//  for(int i=0; i<n; i++){
//    long long sum=0;
//    for(int j=i; j<n; j++){
//      sum=sum+arr[j];
//      ans=max(ans,sum);
//    }
//  }
//  return ans;

/// optimized code
// long long ans = arr[0];
// long long curr=0;
// for (int i = 0; i < n; i++)
// {
//   curr = curr + arr[i];
//   ans = max(ans, curr);
//   if (curr < 0)
//     curr = 0;
//   return ans;
// }

//}
// subarray with zero sum
//  with k-sum
//  longest subarray with zero sum
//  with k-sum
//  no.of subarray with 0 sum
//  with k sum

// subarray with zero sum
// brute approach of max subarray it will return the all subarrays then check its sum
// optimised code
//  _____________________
//  0     i<--0-->j
//  <---x->
//  <-----x------>
//  0 se i tk ka sum x h aur agr 0 se j tk ka sum bhi x hoga toh i se j tk sum 0 hoga
// int sum=0;
// unordered_set<int> s;
// for(int i=0 to <n){
//   sum=sum+arr[i];
//   if(s.find(sum)!=s.end())  return true;
//   if(sum==0) return true;
//   s.insert(sum);
// }
// return false;

// subarray with k-sum
// brute mein whi sbhi subarrays nikalne h
// optimised approach
//  _____________________
//  0     i<--k-->j
//  <---x->
//  <-----y------>
// x+k=y=>  x=y-k//2-sum wali approach
//        int sum=0;
// unordered_set<int> s;
// for(int i=0 to <n){
//   sum=sum+arr[i];
//   if(s.find(sum-k)!=s.end())  return true;
//   if(sum==k) return true;
//   s.insert(sum);
// }
// return false;
//     }
// };

//  longest subarray with zero sum
//  _____________________
//  0     i<--0-->j      z
//  <---x->
//  <-----x------>
//  <---------x----------> so we haveto maintain indexes x->i therefore we use map here agr already present h toh nhi dhalni h value
// optmised
// int len = 0;
// int sum = 0;
// unordered_map<int, int> mp;
// for (int i = 0; i < n; i++)
// {
//   sum = sum + arr[i];
//   if (mp.find(sum) != mp.end())
//   {
//     int currLen = i - mp[sum];
//     len = max(len, currLen);
//   }
//   if (sum == 0)
//   {
//     int currLen = i + 1;
//     len = max(len, currLen);
//   }
// agr element present nhi h toh hum usse map mein dhaalenge with its indexes
//   if (mp.find(sum) == mp.end())
//   {
//     mp[sum] = i;
//   }
// }
// return len;

// longest subarray with k-sum
// int len = 0;
//  int sum = 0;
//  unordered_map<int, int> mp;
//  for (int i = 0; i < n; i++)
//  {
//    sum = sum + arr[i];
//    if (mp.find(sum-k) != mp.end())
//    {
//      int currLen = i - mp[sum];
//      len = max(len, currLen);
//    }
//    if (sum == k)
//    {
//      int currLen = i + 1;
//      len = max(len, currLen);
//    }
//  agr element present nhi h toh hum usse map mein dhaalenge with its indexes
//    if (mp.find(sum) == mp.end())
//    {
//      mp[sum] = i;
//    }
//  }
//  return len;

//  no.of subarray with 0 sum      count=0// ab hum frquency insert krenge map mein value ke saath
//     long long int findSubarray(vector<long long int> &arr, int n ) {
//         //code here
//         long long ans=0;
//         unordered_map<long long, long long>mp;
//         long long sum=0;
//         for(int i=0; i<n; i++){
//             sum=sum+arr[i];
//             if(mp.find(sum)!=mp.end()){

//                 ans=ans+mp[sum];

//             }
//             if(sum==0) ans++;
//            mp[sum]++;    ye sum 6 ko map mein aise insert krega 6->1
//         }
//         return ans;
//     }
// };

//  no.of subarray with k sum      count=0// ab hum frquency insert krenge map mein value ke saath
//     long long int findSubarray(vector<long long int> &arr, int n ) {
//         //code here
//         long long ans=0;
//         unordered_map<long long, long long>mp;
//         long long sum=0;
//         for(int i=0; i<n; i++){
//             sum=sum+arr[i];
//             if(mp.find(sum-k)!=mp.end()){

//                 ans=ans+mp[sum-k];

//             }
//             if(sum==k) ans++;
//            mp[sum]++;    ye sum 6 ko map mein aise insert krega 6->1
//         }
//         return ans;
//     }
// };

// no. fo subarrays jinka xor map mein present ho
// x ^ k = y = > x = k ^ y

// int sum=0;
// int ans=0;
// unordered_map<int,int>mp;
// for(int i=0; i<n; i++){
//   sum=sum^arr[i];
//   if(mp.find(sum^k)!=mp.end()){
//     ans=ans+mp[sum^k];
//   }
//    if(sum==k) ans++;
//            mp[sum]++;    ye sum 6 ko map mein aise insert krega 6->1
//         }
//         return ans;
// }
// Ques->>>>>>>>>>>>>>//printing all subarrays