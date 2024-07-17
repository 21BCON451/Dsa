// graph mein hum parent se child or vice-versa jaa skte

// vertices and edges

// ---directed and undirected graph

// stored with the help of adjacency matrix and adjacency lists(representation vector<int>adj[])

// adjacency lists pe traverse (BFS & DFS)
//  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
// Code here
//         vector<int>ans;
// // visited ke liye ek array ya set bana lo jisme sbhi values 0 h aur jaise hi visited hogi toh 1 se update kr denge

//         vector<int>vis(V,0);
//         queue<int> q;
//         q.push(0);
//         vis[0]=1;
//         while(!q.empty()){
//             int node=q.front();//queue ka front bahar nikalte h
//             q.pop();
//             ans.push_back(node);// phir usse ans ke andr push krna hota

//             //nodes ke saare adjacent nodes pe move kr rhe
//             for(auto it: adj[node]){// adj[node] ek node(vector)h
//                 if(vis[it]==0){  //ab hum check krnege ki it wala node visited h ya nhi
//                     q.push(it);//ab hume adjacent ke saare nodes ko push krwana h
//                     vis[it]=1;
//                 }
//             }
//         }
//         return ans;
//     }

// fails on dijoint/discoonect components
//  0          3
// / \        /
// 1__2     4

// to overcome this problem we run a for loop
// for(i=0; i<V)   //jaise hi i ki value 3 hogi toh ye bta dega ki ye visited nhi h aur phir hum isse queue mein push kr denge

// //DFS//jo bhi node h usse print kr diya phir uske sbhi adjacent ko call kr diya
// void solve(int src, vector<int> adj[],vector<int>&ans, vector<int>&vis){
//       vis[src]=1;
//       ans.push_back(src);
//       for(auto it:adj[src]){//ab hum iterate krenge uske adjacent elements ke liye
//           if(vis[it]==0){
//               solve(it,adj,ans,vis);
//           }
//       }
//   }
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
//         vector<int> ans;
//         vector<int>vis(V,0);
//         solve(0,adj, ans, vis);
//         return ans;
//     }

// same problem exist in this
// isme bhi same cheez krenge

// void solve(int src, vector<int> adj[],vector<int>&ans, vector<int>&vis){
//       vis[src]=1;
//       ans.push_back(src);
//       for(auto it:adj[src]){
//           if(vis[it]==0){
//               solve(it,adj,ans,vis);
//           }
//       }
//   }
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
//         vector<int> ans;
//         vector<int>vis(V,0);
//         for(int i=0; i<V; i++){
//             if(vis[i]==0)
//                solve(i,adj, ans, vis);
//         }
//         return ans;
//     }