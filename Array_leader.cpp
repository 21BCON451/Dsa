// brute approach
//  vector<int> ans;
//  for (int i = 0; i < n; i++)
//  {
//    bool flag = true;
//    for (int j = i + 1 to < n)
//    {
//      flag = false;
//      break;
//    }
//    if (leader == true)
//    {
//      ans.add(a[i]);
//    }

// // optimised mein hum right to left move krnege aur phir reverse kr denge vector ko
// vector<int> ans;
//                 int maxi=INT_MIN;
//                 for(int i=n-1; i>=0; i--){
//                     if(arr[i]>=maxi){
//                         ans.push_back(arr[i]);
//                     }
//                     //keep track of right max
//                     maxi=max(maxi, arr[i]);
//                 }
//                 reverse(ans.begin(), ans.end());
//                 return ans;
//     }