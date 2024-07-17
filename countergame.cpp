// Sample Input 0

// 1
// 6
// Sample Output 0

// Richard

// The "Counter Game" problem can be broken down into understanding the rules of the game and implementing a function that determines the winner based on the given input. The rules of the game are:

// The game starts with a number n.
// Louise always starts the game.
// They take turns performing the following operations until n becomes 1:
// If n is a power of 2, reduce n to n / 2.
// Otherwise, reduce n by the largest power of 2 less than n.
// The player who cannot make a move (when n becomes 1) loses the game.
// #include <string>
// #include <cmath>

// using namespace std;

// bool isPowerOfTwo(long n) {
//     return (n & (n - 1)) == 0;
// }

// long largestPowerOfTwoLessThan(long n) {
//     long power = 1;
//     while (power * 2 < n) {
//         power *= 2;
//     }
//     return power;
// }

// string counterGame(long n) {
//     int moveCount = 0;

//     while (n > 1) {
//         if (isPowerOfTwo(n)) {
//             n /= 2;
//         } else {
//             n -= largestPowerOfTwoLessThan(n);
//         }
//         moveCount++;
//     }

//     if (moveCount % 2 == 1) {
//         return "Louise";
//     } else {
//         return "Richard";
//     }
// }
