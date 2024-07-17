// int height(Node* root) {
//         // Write your code here.
//         if (root == NULL) {
//         return -1;
//     }

//     int left = height(root->left);

//     int right = height(root->right);

//     int ans = max(left, right) + 1;
//     return ans;
//     }