// // // // non linear data structure mein iterate DFS & BFS  se hota
// // // struct Node
// // // {
// // //   int data;
// // //   Node *left;
// // //   Node *right;
// // //   Node(int x)
// // //   {
// // //     data = x;
// // //     left = NULL;
// // //     right = NULL;
// // //   }
// // // };
// // // int main()
// // // {
// // //   Node *root = new Node(10);
// // //   Node *temp1 = new Node(20);
// // //   Node *temp2 = new Node(30);
// // //   root->left = temp1;
// // //   root->right = temp2;
// // // }

// // // 1.> DFS:- pehle left print krna h phir right print krna h
// // // a. preorder=root left right
// // // b. inorder=left root right                                 1
//  // // c. postorder=left right root                              /  \
//                                                               2      3
//  // a.preorder traversal : 12453                              /  \
//                                                             4     5
// preoder traversal
// class solution{
//   public:
//   void solve(TreeNode* root, vector<int> &ans){
//     if(root==NULL) return;
//     ans.push_back(root->val);
//     solve(root->left, ans);
//     solve(root->right, ans);
//   }
//   vector<int> preorderTraversal(TreeNode* root){
//     vector<int> ans;
//     solve(root,ans);
//     return ans;
//   }
// };

// inorder traversal
// void solve(TreeNode* root, vector<int> &ans){
//     if(root==NULL) return;

//     solve(root->left, ans);
//     ans.push_back(root->val);
//     solve(root->right, ans);
//   }
//     vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     solve(root,ans);
//     return ans;
//     }

// //     postoder traversal
// //     class Solution {
// // public:
// //  void solve(TreeNode* root, vector<int> &ans){
// //     if(root==NULL) return;

// //     solve(root->left, ans);

// //     solve(root->right, ans);
// //        ans.push_back(root->val);
// //   }
// //     vector<int> postorderTraversal(TreeNode* root) {
// //     vector<int> ans;
// //     solve(root,ans);
// //     return ans;

// //     }
// // };

// // BFS traversal:level-wise print krna ya phir level-order traversal line by line
// // queue
// //  level-order traversal:
// //  1st form a queue
// //  1
// //  /  \
// // 2    3
// // /  \
// // 4   5

// // queue:1 2 3 4 5
// // pop:1 2 3 4 5
// // print: 1 2 3 4 5
// // class Solution
// // {
// //     public:
// //     //Function to return the level order traversal of a tree.
// //     vector<int> levelOrder(Node* root)
// //     {
// //         vector<int>ans;
// //         if(root==NULL) return ans;
// //         queue<Node* >q;
// //         q.push(root);
// //         while(!q.empty()){
// //             Node* node=q.front();
// //             q.pop();
// //             ans.push_back(node->data);
// //             if(node->left) q.push(node->left);
// //             if(node->right) q.push(node->right);
// //         }
// //         return ans;

// //       //Your code here
// //     }
// // };

// // level-order traversal line by line
// //  1
// //  /  \
// // 2     3
// // /  \
// // 4   5
// // while ke andr bhi for loop run hogi jo ki humari queue ke size tk chlegi for(i=0 ; i<size; i++)
// // queue: 1 2 3 4 5
// // pop:1 2 3 4 5
// // pehle 1 aaya toh size 1 h toh for loop ek baar chlega aur ek level traversal ho gya
// // phir 2 or 3 aaye ab size 2 h toh for loop do baar chlega  aur ek level traversal ho gya
// // phir 4 or 5 aaye ab size 2 h toh for loop do baar chlega  aur ek level traversal ho gya

// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             int size=q.size();

//             //1 d vector temp jisme ye values dhaal ske
//             vector<int> temp;
//             for(int i=0; i<size; i++){
//                TreeNode* node=q.front();
//                q.pop();
//                temp.push_back(node->val);
//                if(node->left) q.push(node->left);
//                if(node->right) q.push(node->right);

//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// };