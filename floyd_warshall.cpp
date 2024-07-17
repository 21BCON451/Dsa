// // adjacency matrix ki form mein h
// //  agr i or j ke beech mein -1 h toh koi edge nhi h
// void shortest_distance(vector<vector<int>>&arr){
// 	    // Code here
// 	    int n=arr.size();
// 	    for(int i=0; i<n; i++){
// 	        for(int j=0; j<n; j++){
// 	            if(arr[i][j]==-1) arr[i][j]=1e9;
// 	        }
// 	    }
// 	    for(int k=0; k<n;k++){
// 	        for(int i=0; i<n;i++){
// 	            for(int j=0; j<n; j++){
// 	                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
// 	            }
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        for(int j=0; j<n; j++){
// 	            if(arr[i][j]==1e9) arr[i][j]=-1;
// 	        }
// 	    }
// 	}