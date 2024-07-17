// class Solution {
// public:
// void solve(int col, int n, vector<string>&board,vector<vector<string>>&ans, vector<int>&left,vector<int>&upperDia, vector<int>&lowerDia){
//     if(col==n){
//         ans.push_back(board);
//         return;
//     }
//     for(int row=0; row<n; row++){
//         if(left[row]==0 && upperDia[n-1+row-col]==0 && lowerDia[row+col]==0){
//             board[row][col]='Q';
//             left[row]=1;
//             upperDia[n-1+row-col]=1;
//             lowerDia[row+col]=1;
//             solve(col+1,n, board,ans,left,upperDia,lowerDia);
//             //reset
//             board[row][col]='.';
//             left[row]=0;
//             upperDia[n-1+row-col]=0;
//             lowerDia[row+col]=0;

//         }
//     }
// }
//     vector<vector<string>> solveNQueens(int n) {
//       vector<vector<string>>ans;
//       vector<string>board;
//       string s(n,'.');
//       for(int i=0; i<n; i++){
//         board.push_back(s);
//       }
//       vector<int>left(n,0);
//       vector<int>upperDia(2*n-1,0);
//       vector<int>lowerDia(2*n-1,0);
// //       solve(0,n,board,ans, left, upperDia, lowerDia);
// //       return ans;
// //     }
// // };

// ///less optimised code------->>>>>>>
// bool isSafe(int row, int col, vector<string>& board, int n) {
//         // Check the left side of the row
//         for (int j = 0; j < col; ++j) {
//             if (board[row][j] == 'Q') {
//                 return false;
//             }
//         }

//         // Check the upper diagonal
//         for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
//             if (board[i][j] == 'Q') {
//                 return false;
//             }
//         }

//         // Check the lower diagonal
//         for (int i = row, j = col; i < n && j >= 0; ++i, --j) {
//             if (board[i][j] == 'Q') {
//                 return false;
//             }
//         }

//         return true;
//     }

// void solve(int col, int n, vector<string>&board,vector<vector<string>>&ans){
//     if(col==n){
//         ans.push_back(board);
//         return;
//     }
//     //ab hum check krenge ki queen ko safe rkhna h ya nhi
//     for(int i=0; i<n;i++){
//         if(isSafe(i,col,board,n)==true){
//             board[i][col]='Q';
//             solve(col+1,n,board,ans);
//             board[i][col]='.';
//         }
//     }
// }
//     vector<vector<string>> solveNQueens(int n) {
//       vector<vector<string>>ans;
//       //ek single chessboard banayenge ab
//       vector<string>board;
//       string s(n,'.');
//       for(int i=0; i<n; i++){
//         board.push_back(s);
//       }
//       solve(0,n,board,ans);
//       return ans;
//     }