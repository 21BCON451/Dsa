// inorder traversal of binary search tree always gives sorted
// 1. search 2. insert 3. delete

/// search

// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//        if(root==NULL) return NULL;
//        TreeNode* curr=root;
//        while(curr) {
//         if(curr->val==val) return curr;
//         else if(curr->val>val){
//             curr=curr->left;
//         }
//         else{
//             curr=curr->right;
//         }
//        }
//         return NULL;

//     }
// };

/// insert
//     class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         //find position and then insert
//         if(root==NULL){
//             TreeNode* temp=new TreeNode(val);
//             return temp;
//         }
//         if(root->val>val){
//             root->left=insertIntoBST(root->left, val);
//         }
//         else{
//             root->right=insertIntoBST(root->right, val);
//         }
//         return root;
//     }
// };