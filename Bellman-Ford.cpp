// vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
//           vector<int> distance(V,1e8);
//                     distance[S]=0;

//           //v-1 times relax krna
//           for(int i=0; i<V-1;i++){
//               for(auto x: edges){
//                   int u=x[0];
//                   int v=x[1];
//                   int wt=x[2];
//                   if(distance[u]!=1e8 && distance[v]>distance[u]+wt){
//                       distance[v]=distance[u]+wt;
//                   }
//               }
//           }
//           return distance;
//     }