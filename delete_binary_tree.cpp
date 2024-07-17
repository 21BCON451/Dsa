// // delete the node who have only 1 child
// // delete leaf node
// // delete the node who have 2 child  ///right side ki sbse smallest left value se swap kr do

// class Solution {
// public:
// TreeNode* findLeftSmall(TreeNode* root){
//     TreeNode* curr=root->right;
//     while(curr && curr->left){
//         curr=curr->left;
//     }
//     return curr;
// }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//      if(root==NULL) return NULL;
//      if(root->val> key){
//         root->left=deleteNode(root->left, key);
//      }
//      else if(root->val<key){
//         root->right=deleteNode(root->right, key);
//      }
//      else{
//         if(root->left==NULL){
//             TreeNode* temp=root->right;
//             delete root;
//             return temp;
//         }
//         if(root->right==NULL){
//             TreeNode* temp=root->left;
//             delete root;
//             return temp;
//         }
//         else{
//             TreeNode* leftSmall=findLeftSmall(root);//ye right side ki left value ko return krega
//             root->val=leftSmall->val;
//             root->right=deleteNode(root->right,leftSmall->val);
//         }
//      }
//      return root;
//     }
// };