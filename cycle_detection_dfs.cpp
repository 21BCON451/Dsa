// bool dfs(int node, int parent, vector<int>&vis, vector<int> adj[]){
//       vis[node]=1;
//       for(auto it: adj[node]){
//           if(vis[it]==0){
//            if(dfs(it,node,vis,adj)==true) return true;

//           }
//           else{
//               if(it!=parent) return true;
//           }
//       }
//       return false;
//   }
//
//     bool isCycle(int V, vector<int> adj[]) {
//
//         //parent ke pass waapis nhi jaana//agr adjacent mein parent aata h toh hum true abhi return nhi krenge
//         //agr dobara visited hua aur parent nhi h toh mtlb cycle h
//         //this approach only works on undirected graph

//     vector<int>vis(V,0);
//     for(int i=0; i<V; i++){
//         if(vis[i]==0){
//             if(dfs(i,-1,vis,adj)==true) return true;
//         }
//     }
//     return false;
//     }