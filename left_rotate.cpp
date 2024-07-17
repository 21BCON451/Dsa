// left shift by 1 place
// vector<int> rotateArray(vector<int>& arr, int n){
//   int temp=arr[0];
//   for(int i=1; i<n; i++){
//     arr[i-1]=arr[i];
//   }
//   arr[n-1]=temp;
// return arr;
// }

// left shift by d

// 1st approach
//  for(int j=0;j<d; j++){
//     int temp=arr[0];
//    for(int i=1; i<n; i++){
//      arr[i-1]=arr[i];
//    }
//    arr[n-1]=temp;
//  }

// 2nd approach 12345 d=2
//  1. temp[d]=1 2---for(i=0 to <d){
//  temp[i]=arr[i]
//  }
//  2. 345---for(i=d to<n){
//  arr[i-d]=arr[i]}
//  3. 34512---for(i=0 to <d){
//  arr[n-d+i]=temp[i]}

// 3rd approach
//  d%n  123=n   d=4 4%3=1   it is mainly for d>n
//  0->123       //reverse 21 then reverse 345 ---21543   then reverse 34512
//  1->231
//  2->312
//  3->123
//  4->231

// d=d%n;
// reverse(arr,arr+d);
// reverse(arr+d, arr+n);
// reverse(arr,arr+n);
