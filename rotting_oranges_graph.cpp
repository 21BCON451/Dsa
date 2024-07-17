// // we use bfs because ek orange apne se next wale ko rotten kr rha

// // queue mein pus krenge row, col and time ((0,0),0) phir((0,1,1)) aur ((1,0,1)) ko push krenge similarly aise krte jaayenge  aur ((0,0),0) ko pop kr denge  queue<pair<int,pat<int, int>> t; pehla wala int mein time , second wale mein row aur thied wale mein col
// // auto it:q.front();  time nikalne ke liye=it.first   row=it.second.first  col=it.second.second
// // phir iterate
// // bfs

// // up-down-left-right move ke liye
// //  (i-1,j) (i,j+1) (i+1,j) (i,j-1)
// //////OR///////
// // delrow[]={1,-1,0,0}
// // delcol[]={0,0,1,-1}  each iteration it forms above equation

// // check krenge jaise hi move kiya toh grid ke andr h ya nhi
// // jo orange already kharab h usse push nhi krna/// jo null h usse push nhi krna
// // agr cell ki value 2 h kharab h 1 toh fresh aur 0 toh orange not present

// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& arr) {
//         int n=arr.size();
//         int m=arr[0].size();
//         queue<pair<int,pair<int,int>>>q;
//         int fresh=0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(arr[i][j]==2){
//                     q.push({0,{i,j}});
//                 }
//                 if(arr[i][j]==1){
//                     fresh++;
//                 }
//             }
//         }
//         int ans=0;
//         while(!q.empty()){
//             auto it=q.front();
//             q.pop();
//             int time=it.first;
//             ans=max(ans, time);
//             int row=it.second.first;
//             int col=it.second.second;
//             int delrow[]={1,-1,0,0};
//             int delcol[]={0,0,1,-1};
//             for(int i=0; i<4; i++){  //hum del wale mein move krnege
//                 int nrow=row+delrow[i];
//                 int ncol=col+delcol[i];
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && arr[nrow][ncol]==1){
//                     //checking ki vo grid se bahar toh nhi chla gya aur fresh hona chahiye
//                     arr[nrow][ncol]=2;//orange kaharb kr diya
//                     fresh--;
//                     q.push({time+1,{nrow,ncol}});
//                 }
//             }
//         }
//         if(fresh==0) return ans;
//         return -1;
//     }
// };