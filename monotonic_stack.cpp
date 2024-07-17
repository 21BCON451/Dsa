// previous greater element
// next greater element
// previous smaller element
//  next smaller element

// previous greater element
// void previousGreater(vector<int>&arr){
//   int n=arr.size();
//   stack<int>s;
//   for(int i=0; i<n; i++){
//     while(s.empty()==false and s.top()<=arr[i]){
//       s.pop();
//     }
//     if(s.empty()==true) cout<<-1<<" ";
//     else{
//       cout<<s.top()<<" ";
//     }
//     s.push(arr[i]);
//   }
// }

// previous smaller element
// void previousSmaller(vector<int>&arr){
//   int n=arr.size();
//   stack<int>s;
//   for(int i=0; i<n; i++){
//     while(s.empty()==false and s.top()>=arr[i]){
//       s.pop();
//     }
//     if(s.empty()==true) cout<<-1<<" ";
//     else{
//       cout<<s.top()<<" ";
//     }
//     s.push(arr[i]);
//   }
// }

// next greater element
// void nextGreater(vector<int>&arr){
//   int n=arr.size();
//   stack<int>s;
//   for(int i=n-1; i>=0; i--){
//     while(s.empty()==false and s.top()<=arr[i]){
//       s.pop();
//     }
//     if(s.empty()==true) cout<<-1<<" ";
//     else{
//       cout<<s.top()<<" ";
//     }
//     s.push(arr[i]);
//   }
// }

// next smaller element
// void nextSmaller(vector<int>&arr){
//   int n=arr.size();
//   stack<int>s;
//   for(int i=n-1; i>=0; i--){
//     while(s.empty()==false and s.top()>=arr[i]){
//       s.pop();
//     }
//     if(s.empty()==true) cout<<-1<<" ";
//     else{
//       cout<<s.top()<<" ";
//     }
//     s.push(arr[i]);
//   }
// }
