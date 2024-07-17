/// agr topo sort likh paa rhe ho toh mtlb cyclic nhi h

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
// 	    }
// if(ans.size()==V) return false;
// return true;
//}