// // //  heights = [2,1,5,6,2,3]
// // indexes ko push krwana h
// //  ps:-1 -1 1 2 1 4(previous smaller)
// //  ns: 1 6 4 4 6 6(next smaller)
// //  l:ns-ps-1: 1 6 2 1 4 1

// class Solution {
// public:
//     vector<int> previousSmaller(vector<int>&arr){
//             int n=arr.size();
//             vector<int> ans;
//             stack<int>s;
//             for(int i=0; i<n;i++){
//                 while(s.empty()==false && arr[s.top()]>=arr[i]){
//                    s.pop();

//                 }
//                 if(s.empty()) ans.push_back(-1);
//                 else ans.push_back(s.top());
//                    s.push(i);

//             }

//         return ans;
//     }
//      vector<int> nextSmaller(vector<int>&arr){
//             int n=arr.size();
//             vector<int> ans;
//             stack<int>s;
//             for(int i=n-1; i>=0;i--){
//                 while(s.empty()==false && arr[s.top()]>=arr[i]){
//                    s.pop();

//                 }
//                 if(s.empty()) ans.push_back(n);
//                 else ans.push_back(s.top());
//                    s.push(i);

//             }
//          reverse(ans.begin(), ans.end());

//         return ans;
//     }
//     int largestRectangleArea(vector<int>& heights) {
//      // 🥱 2 height se 1 length ki  area=2
//      //     1 ke liye 6
//      //     5 ke liye 2
//      //     6 ke liye 1
//      //     2 ke liye 4
//      //     3 ke liye 1
//         vector<int>ps=previousSmaller(heights);
//         vector<int>ns=nextSmaller(heights);
//         int ans=0;
//         int n=heights.size();
//         for(int i=0; i<n; i++){
//             int len=ns[i]-ps[i]-1;
//             int area=heights[i]*len;
//             ans=max(ans, area);
//         }
//         return ans;
//     }

// };