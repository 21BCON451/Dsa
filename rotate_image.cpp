// brute mein same size ka matrix bana lo aur i ko j ki jgh aur j ko i ki jgh rkh do
// jb bhi hum arr pass krte h function mein toh hum array ko nhi blki pointer ko pass kr rhe hote
// transpose matrix
// void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         //crreating a vector of type int having same matrix size
//         vector<vector<int>temp(n,vector<int>(n,0));
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n;j++){
//                 temp[j][i]=matrix[i][j];
//             }
//         }
//         return temp[];
//     }

// optimised code for transpose matrix
// swap lower triangle to upper triangle[4 7 8] & [2 3 6]

// for(i=0 to <n){
//   for(j=0 to<i){
//     swap(a[i][j],a[j][i]);
//   }
// }
// valid only nxn matrix

// now rotate matrix by 90 degree
//  -transpose
//  -rows reverse

//   int n=matrix.size();

//   for(int i=0; i<n;i++){
//       for(int j=0; j<i; j++){
//         swap(matrix[i][j],matrix[j][i]);
//            }
//       }
//  for( int i=0; i<n;i++){//hrr row pe jaa rhe
//      reverse(matrix[i].begin(), matrix[i].end());
//  }

// agr anticlockwise rotate krna ho toh pehle reverse karo aur phir transpose krna