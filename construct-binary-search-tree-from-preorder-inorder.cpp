// // preorder ka 1st element root hoga
// // phir recursively inoreder aur preorder ko call krenge

// // ionorder ka map bana lete h uske index ke saath store krwa denge

// class Solution {
// public:
// TreeNode* solve(int is, int ie, vector<int>&inorder, int ps, int pe, vector<int>&preorder, unordered_map<int, int>&mp){
//     if(is>ie||ps>pe) return NULL;
//     TreeNode* root=new TreeNode(preorder[ps]);
//     int idx=mp[root->val];
//     int left=idx-is;
//     root->left=solve(is,idx-1,inorder,ps+1, ps+left,preorder,mp);
//     root->right=solve(idx+1,ie,inorder,ps+left+1,pe,preorder,mp);
//     return root;
// }
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         unordered_map<int, int>mp;
//         int n=preorder.size();
//         for(int i=0; i<n; i++){
//             mp[inorder[i]]=i;
//         }
//         return solve(0, n-1, inorder, 0, n-1, preorder, mp);
//     }
// };