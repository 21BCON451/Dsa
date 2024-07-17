// //////////////VERY VERY IMPORTANT///////////////////

// class Solution {
// public:
//     bool isValid(string s) {
//         //Jo bracket pehle open hua vo sbse baadme close hua
//         //check for combination, no. of open brackets are more, no. of closing brackets are more

//         // stack banao iterate karo aur opeening bracket ate store krdo aur closing aate hi stack ka topmost element ko remove krenge aur agr ek hi honge toh true else false
//       stack<char> st;
//      for(int i=0; i<s.size(); i++){
//          char curr=s[i];
//          if(curr=='(' || curr=='{' ||curr=='['){
//              st.push(curr);
//          }
//          else{
//              if(st.empty()==true) return false;
//              char sttop=st.top();
//              st.pop();
//              if(
//                  (curr==')' && sttop=='(') or
//               (curr=='}' && sttop=='{') or
//              (curr==']' && sttop=='[')
//              ){
//                  continue;
//              }
//          else{
//              return false;
//          }
//          }
//      }
//         if(st.empty()==true) return true;
//         return false;

//     }
// };