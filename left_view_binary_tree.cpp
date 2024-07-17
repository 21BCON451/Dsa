// // vector<int> rightSideView(TreeNode* root) {
// //         vector<int> ans;
// //         if(root==NULL) return ans;
// //         queue<Node*> q;
// //         q.push(root);
// //         while(!q.empty()){
// //             int size=q.size();
// //             for(int i=0; i<size; i++){
// //                 Node*  node=q.front();
// //                 q.pop();
// //                 if(i==0){
// //                     ans.push_back(node->data);

// //                 }
// //                 if(node->left) q.push(node->left);
// //                 if(node->right) q.push(node->right);
// //             }
// //         }
// //         return ans;
// //     }

// right view
// vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans;
//         if(root==NULL) return ans;
//         queue<Node*> q;
//         q.push(root);
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0; i<size; i++){
//                 Node*  node=q.front();
//                 q.pop();
//                 if(i==size-1){
//                     ans.push_back(node->data);

//                 }
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//         }
//         return ans;
//     }

// right view of binary tree by dfs
//  void solve(TreeNode* root, vector<int>&ans, int lev){
//      if(root==NULL) return;
//      if(ans.size()==lev){
//          ans.push_back(root->val);
//      }
//      solve(root->right,ans, lev+1);
//      solve(root->left,ans, lev+1);

// }
// vector<int> rightSideView(TreeNode* root) {
//   vector<int> ans;
//         solve(root,ans,0);
//         return ans;
//     }
// };

// left view of binary tree by dfs
//  void solve(TreeNode* root, vector<int>&ans, int lev){
//      if(root==NULL) return;
//      if(ans.size()==lev){
//          ans.push_back(root->val);
//      }
//
//      solve(root->left,ans, lev+1);
// solve(root->right,ans, lev+1);

// }
// vector<int> rightSideView(TreeNode* root) {
//   vector<int> ans;
//         solve(root,ans,0);
//         return ans;
//     }
// };