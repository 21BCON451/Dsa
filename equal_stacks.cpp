// Equal Stacks
// You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height. You can change the height of a stack by removing and discarding its topmost cylinder any number of times.

// Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more cylinders from the top of zero or more of the three stacks until they are all the same height, then return the height.
// STDIN       Function
// -----       --------
// 5 3 4       h1[] size n1 = 5, h2[] size n2 = 3, h3[] size n3 = 4
// 3 2 1 1 1   h1 = [3, 2, 1, 1, 1]
// 4 3 2       h2 = [4, 3, 2]
// 1 1 4 1     h3 = [1, 1, 4, 1]
// Sample Output

// 5

// int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
// int sum1=0, sum2=0, sum3=0;
//     for(int h: h1) sum1+=h;
//     for(int h: h2) sum2+=h;
//     for(int h: h3) sum3+=h;
//     int i=0, j=0, k=0;
//     while(true){
//         if(i==h1.size()|| j== h2.size()|| k==h3.size()){
//             return 0;
//         }
//         if(sum1==sum2 && sum2==sum3){
//             return sum1;
//         }
//         if(sum1>=sum2 && sum1>= sum3){
//             sum1-=h1[i++];
//         }
//         else if(sum2>=sum1 && sum2>=sum3){
//             sum2-=h2[j++];
//         }
//         else if(sum3>=sum1 && sum3>=sum1){
//             sum3-=h3[k++];
//         }
//     }
// }