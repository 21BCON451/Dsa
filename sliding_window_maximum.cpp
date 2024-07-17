// nums = [1,3,-1,-3,5,3,6,7], k = 3

// // brute mein toh normal array ko upr iterate krnege k size se
// // Window position                Max
// // ---------------               -----
// // [1  3  -1] -3  5  3  6  7       3
// //  1 [3  -1  -3] 5  3  6  7       3
// //  1  3 [-1  -3  5] 3  6  7       5
// //  1  3  -1 [-3  5  3] 6  7       5
// //  1  3  -1  -3 [5  3  6] 7       6
// //  1  3  -1  -3  5 [3  6  7]      7

// // deque is optmization code
// //  deque ka  front element mere window ka part h bhi ya nhi(i-k) aur same indes hua toh pop aur 1st element ko dhaal do jb tk curr element bda hoga hum deque ke back ko pop krte rhenge wrna push krenge//index ko push krenge
// //  1 3 -1 -3 5 3 6 7
// //  3 3 5 5 6 7

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n=arr.size();
//         deque<int> dq;
//         vector<int> ans;
//         if(k>n) return ans;
//         for(int i=0; i<k; i++){
//             while(dq.empty()==false && arr[i]>=arr[dq.back()]){
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//         }
//         ans.push_back(arr[dq.front()]);
//         for(int i=k; i<n; i++){
//             if(dq.front()==i-k){
//                 dq.pop_front();
//             }
//            while(dq.empty()==false && arr[i]>=arr[dq.back()]){
//                 dq.pop_back();
//             }
//              dq.push_back(i);
//              ans.push_back(arr[dq.front()]);
//         }
//         return ans;
//     }
// };