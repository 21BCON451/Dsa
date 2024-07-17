// // backtracking check krega ki up movemnet lena shi h ya nhi ye recursion nhi krta
// // condition:
// // matrix
// // blocked
// // visited

// // path lena h  Right ke liye R and so on for lest L , Up U, Down D

// void solve(int i, int j, int n, string path, vector<string> &ans, vector<vector<int>> &vis, vector<vector<int>> &m) {
//     // Base condition: If we reach the bottom-right corner, add the current path to the answers
//     if (i == n - 1 && j == n - 1) {
//         ans.push_back(path);
//         return;
//     }

//     // Mark the current cell as visited
//     vis[i][j] = 1;

//     // Up movement: i -> i-1, j remains the same
//     if (i - 1 >= 0 && m[i - 1][j] == 1 && vis[i - 1][j] == 0) {
//         solve(i - 1, j, n, path + 'U', ans, vis, m);
//     }

//     // Down movement: i -> i+1, j remains the same
//     if (i + 1 < n && m[i + 1][j] == 1 && vis[i + 1][j] == 0) {
//         solve(i + 1, j, n, path + 'D', ans, vis, m);
//     }

//     // Left movement: i remains the same, j -> j - 1
//     if (j - 1 >= 0 && m[i][j - 1] == 1 && vis[i][j - 1] == 0) {
//         solve(i, j - 1, n, path + 'L', ans, vis, m);
//     }

//     // Right movement: i remains the same, j -> j + 1
//     if (j + 1 < n && m[i][j + 1] == 1 && vis[i][j + 1] == 0) {
//         solve(i, j + 1, n, path + 'R', ans, vis, m);
//     }

//     // Unmark the current cell as visited for backtracking
//     vis[i][j] = 0;
// }

// vector<string> findPath(vector<vector<int>> &m, int n) {
//     vector<string> ans;
//     string path = "";

//     // If the starting or ending point is blocked, return an empty answer
//     if (m[0][0] == 0 || m[n-1][n-1] == 0) return ans;

//     // Create a visited matrix initialized to 0
//     vector<vector<int>> vis(n, vector<int>(n, 0));

//     // Start the solve function from the top-left corner
//     solve(0, 0, n, path, ans, vis, m);

//     // Sort the paths lexicographically
//     sort(ans.begin(), ans.end());

//     // If no paths found, return "-1"
//     if (ans.empty()) {
//         ans.push_back("-1");
//     }

//     return ans;
// }
