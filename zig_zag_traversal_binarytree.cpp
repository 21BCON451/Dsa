// 1
// /  \
// 2   3
// /  \
// 4   5

// ans= 1 3 2 4 5
// pehle flag banao usse true kr do ans mein push krne se pehle mein check krungi ki flag true h ya nhi agr true h toh push back wrna reverse krke flag ko true kr doon aur ans ko push back

// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         bool flag=true;
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
//             if(flag){
//                 ans.push_back(temp);
//                 flag=false;
//             }
//             else{
//                 reverse(temp.begin(), temp.end());
//                 ans.push_back(temp);
//                 flag=true;
//             }
//             // ans.push_back(temp);
//         }
//         return ans;
//     }
// };