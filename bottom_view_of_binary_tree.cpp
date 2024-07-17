// vector <int> bottomView(Node *root) {
//         // Your Code Here
//         vector<int>ans;
//         if(root==NULL) return ans;
//         map<int,int> mp;
//         queue<pair<Node*,int>>q;
//         q.push({root,0});//kyunki 1 ka level 0 h
//         while(!q.empty()){
//             auto it= q.front();//ye easily pair ke datatype ko store kr dega
//             q.pop();
//             Node* node=it.first;
//             int lev=it.second;
//              // ye line htt jaayegi if(mp.find(lev)==mp.end())
//                 mp[lev]=node->data;//then data ko push kr denge

//             if(node->left){
//                 q.push({node->left, lev-1});
//             }
//             if(node->right){
//                 q.push({node->right, lev+1});
//             }
//         }
//         for(auto x:mp){
//             ans.push_back(x.second);
//         }
//         return ans;
//     }