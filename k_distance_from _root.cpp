// // class Solution
// // {
// //     public:
// //     void solve(Node* root, vector<int>& ans, int k){
// //         if(root==NULL){
// //             return;
// //         }
// //         if(k==0){
// //             ans.push_back(root->data);
// //             return;
// //         }
// //         solve(root->left,ans, k-1);
// //         solve(root->right, ans, k-1);
// //     }
// //     // function should print the nodes at k distance from root
// //     vector<int> Kdistance(struct Node *root, int k)
// //     {
// //         vector<int> ans;
// //         solve(root, ans, k);
// //         return ans;
// //       // Your code here
// //     }
// // };

// //another method
// class Solution
// {
//     public:
//     void solve(Node* root, vector<int>& ans, int k, int distance){
//         if(root==NULL){
//             return;
//         }
//         if(k==0){
//             ans.push_back(root->data);
//             return;
//         }
//         solve(root->left,ans, k, distance+1);
//         solve(root->right, ans, k, distance+1);
//     }
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(struct Node *root, int k)
//     {
//         vector<int> ans;
//         solve(root, ans, k,0);
//         return ans;
//       // Your code here
//     }
// };