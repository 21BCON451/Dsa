// //total no. of conected components
// //jitni baar bfs call hoga utne hi no. of conected components honge

// class Solution {
// public:
// void bfs(int src, vector<int>&vis, vector<vector<int>>& isConnected){
//     int n=isConnected.size();
//     queue<int> q;
//     q.push(src);
//     vis[src]=1;
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         for(int i=0; i<n; i++){
//             if(vis[i]==0 && isConnected[node][i]==1){// isConnected[node][i]==1 ek matrix h jaise node 0 h aur i=0 toh isConnected[0][1] pe dekhenge aur iska mtlb h ki current node se i ke liye koi edge connected h
//               q.push(i);
//               vis[i]=1;
//             }
//         }
//     }
// }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n=isConnected.size();
// //         vector<int>vis(n,0);
// //         int ans=0;
// //         for(int i=0; i<n; i++){
// //             if(vis[i]==0){
// //                 bfs(i, vis, isConnected);
// //                 ans++;
// //             }
// //         }
// //         return ans;
// //     }
// // };

// //dfs

// void dfs(int src, vector<int>&vis, vector<vector<int>>& isConnected){
//     vis[src]=1;
//     for(int i=0; i<isConnected.size(); i++){
//      if(vis[i]==0 && isConnected[src][i]==1){
//         dfs(i, vis, isConnected);
//      }
//     }
//  }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n=isConnected.size();
//         vector<int>vis(n,0);
//         int ans=0;
//         for(int i=0; i<n; i++){
//             if(vis[i]==0){
//                 dfs(i, vis, isConnected);
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };