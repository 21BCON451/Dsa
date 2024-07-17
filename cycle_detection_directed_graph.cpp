// // Topo sort
// // graph:a->b->c
// // Topo sort : abc

// // bfs based algo
// // sbse pehle vector abnao indegree
// // sbhi ke indegree likho
// // ab in indegree ke arr pe iterate krenge  jiski bhi 0 h usse push kr do
// // q.front()
// // print
// // 0 ke neighbor pr jaao aur uski indegree ko -1 kr do then again jiski bhi 0 h usse push kr do queue pe

// vector<int> topoSort(int V, vector<int> adj[])
// 	{

// 	    vector<int>indeg(V,0);
// 	    //ab hum adj lists pe iterate krenge jaise hi indegree milti h vaise hi upr wale vector pe indegree ko increase kr do
// 	    for(int i=0; i<V; i++){
// 	        for(auto it: adj[i]){
// 	            indeg[it]++;
// 	        }
// 	    }
// 	    queue<int> q;
// 	    //ab hum unn elemnts ko push krwayenge jinki indegree 0 h
// 	    for(int i=0;i<V; i++){
// 	      if(indeg[i]==0) q.push(i);

// 	    }
// 	    vector<int> ans;
// 	    while(!q.empty()){
// 	        int node=q.front();
// 	        q.pop();
// 	        ans.push_back(node);
// 	        for(auto it: adj[node]){
// 	            indeg[it]--;
// 	            if(indeg[it]==0) q.push(it);
// 	        }
// 	    }

// 	    return ans;
// 	}