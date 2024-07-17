// second largest element
// 1.  curr>lar
// sec=lar;
// lar=curr;

// 2. curr<lar  curr>sec;
// sec=curr

// 3. curr==lar
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main()
// {
//   vector<int> arr = { 1,
//                       2,
//                       3,
//                       4,
//                       5,
//                       6 } int lar = arr[0];
//   int sec = INT_MIN;
//   for (int i = 0; i < 5; i++)
//   {
//     if (arr[i] > lar)
//     {
//       sec = lar;
//       lar = arr[i];
//     }
//     else if (arr[i] < lar || arr[i] > sec)
//     {
//       sec = arr[i];
//     }
//     else
//     {
//       arr[i] = lar;
//     }
//   }
//   cout << " " << sec << endl;
// }