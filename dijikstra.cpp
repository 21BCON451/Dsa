// fails on negative weight

// //  vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
// //     {

// //         vector<int>distance(V,1e9);//mtlb infinity ya larger value ko ek vector mein store kr diya
// //         //source node ki distance 0 kr do
// //         distance[S]=0;

// //         //ab set mein distance or node ko store krwana h
// //         set<pair<int, int>>s;
// //         s.insert({0,S});
// //         while(!s.empty()){
// //             //set ka front element bahar nikalenge
// //             auto it=*(s.begin());//ek pair store hoga aur phir erase kr denge
// //             s.erase(it);
// //             int pathLen=it.first;
// //             int node=it.second;
// //             //ab node se adjacent node ko explore krenge
// //             for(auto x: adj[node]){
// //              int adjNode=x[0];
// //              int wt=x[1];
// //              if(distance[adjNode]>pathLen+wt){
// //                  distance[adjNode]=pathLen+wt;
// //                  s.insert({pathLen+wt, adjNode});
// //              }
// //             }
// //         }
// //         return distance;

// //     }

// // to optimise this we use priority queue
// vector<int> distance(V, 1e9); // Initialize distances to infinity
//     distance[S] = 0; // Distance to the source is 0

//     // Min-heap to store (distance, node)
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     pq.push({0, S});

//     while (!pq.empty()) {
//         auto it = pq.top(); // Get the node with the smallest distance
//         pq.pop();

//         int pathLen = it.first;
//         int node = it.second;

//         // Explore adjacent nodes
//         for (auto& x : adj[node]) {
//             int adjNode = x[0];
//             int wt = x[1];

//             if (distance[adjNode] > pathLen + wt) {
//                 distance[adjNode] = pathLen + wt;
//                 pq.push({distance[adjNode], adjNode});
//             }
//         }
//     }

//     return distance;