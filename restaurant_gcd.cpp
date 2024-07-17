// Martha is interviewing at Subway. One of the rounds of the interview requires her to cut a bread of size l*b into smaller identical pieces such that each piece is a square having maximum possible side length with no left over piece of bread.

// Sample Input 0

// 2
// 2 2
// 6 9
// Sample Output 0

// 1
// 6
// Explanation 0

// The 1st testcase has a bread whose original dimensions are 2X2 , the bread is uncut and is a square. Hence the answer is 1.
// The 2nd testcase has a bread of size 6X9 . We can cut it into 54 squares of size 1X1, 6 of size 3X3. For other sizes we will have leftovers. Hence, the number of squares of maximum size that can be cut is 6.
// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b, a%b);
// }

// int restaurant(int l, int b) {
// int side=gcd(l,b);
//     return (l * b) / (side * side);
// }