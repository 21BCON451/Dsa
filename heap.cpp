// heap or priority queue====jb elments ko priority deni hoti h

// ~Max heap===jbb element bahar niklnege toh sbse pehle bada wala element bahar niklega
// // ~Min heap==min element top pe hoga
// based on binary tree but structure is array
// O(log n):push/pop

// Max-heap==> priority_queue<int> pq;
//  pq.push(10);
//  pq.pop(); pq.top(); pq.size(); pq.empty();

// Min heap==> priority_queue<int,vector<int>,greater<int>>pq;
//  pq.push(10);
// //  pq.pop(); pq.top(); pq.size(); pq.empty();

// // vector<int> arr = {100, 1, 2, 200, 5, 300};
// // priority_queue<int,vector<int>,greater<int>>pq(arr.begin(), arr.end());------------ye sort krega
// // int sum = 10;
// int count=0;
// // max no. of items ko purchase krna h
// while(!pq.empty()){
//   if(pq.top()<=sum){
//     sum=sum-pq.top();
//     pq.pop();
//     count++;
//   }
//   else{
//     break;
//   }
// }
// cout<<count<<endl;