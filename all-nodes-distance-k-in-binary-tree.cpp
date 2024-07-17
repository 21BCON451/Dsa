// // map banayenge key toh node hogi aur value parent node se mark kr denge
// //  5->3
// //  1->3
// //  6->5
// //  2->5

// // root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, k = 2

// // //visited node ka bhi dhyaan rkhna hoga// set banalo visited krte jaao aur set mein dhaalte jaao
// class Solution {
// public:
// void mappingPar(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&mp){
//     if(root==NULL) return;
//          //BFS
//          queue<TreeNode*>q;
//          q.push(root);
//          while(!q.empty()){
//             TreeNode* node=q.front();
//             q.pop();
//             if(node->left){
//                 mp[node->left]=node;//mark kr diya ki left wala parent ka mark
//                 q.push(node->left);
//             }
//             if(node->right){
//                 mp[node->right]=node;
//                 q.push(node->right);
//             }
//          }
// }
// void solve(TreeNode* root, int k, vector<int>& ans,unordered_map<TreeNode*, TreeNode*>&mp,unordered_set<TreeNode*>&s){
//     if(root==NULL) return;
//     s.insert(root);//isse humne mark kr diya ki root visited ho gya
//     if(k==0){
//         ans.push_back(root->val);
//         return;
//     }
//     if(s.find(root->left)==s.end()){
//         solve(root->left, k-1, ans, mp,s);
//     }
//     if(s.find(root->right)==s.end()){
//         solve(root->right, k-1, ans, mp,s);
//     }
//     if(s.find(mp[root])==s.end()){
//          solve(mp[root], k-1, ans, mp,s);
//     }

// }
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         unordered_map<TreeNode*, TreeNode*>mp;
//         mappingPar(root, mp);
//         unordered_set<TreeNode*>s;
//         vector<int>ans;
//         solve(target,k, ans, mp, s);
//         return ans;
//     }
// };