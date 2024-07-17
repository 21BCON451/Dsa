// Game of Thrones - I
// Sample Input 0

// aaabbbb
// Sample Output 0

// YES
// Explanation 0

// A palindromic permutation of the given string is bbaaabb.
// Here’s the step-by-step approach:

// Count the frequency of each character in the string.
// Check how many characters have an odd frequency.
// If more than one character has an odd frequency, it cannot be rearranged into a palindrome.
// If zero or one character has an odd frequency, it can be rearranged into a palindrome.

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// string gameOfThrones(string s) {
//     unordered_map<char, int> charCount;

//     // Count the frequency of each character
//     for (char c : s) {
//         charCount[c]++;
//     }

//     int oddCount = 0;

//     // Count the number of characters with an odd frequency
//     for (auto& entry : charCount) {
//         if (entry.second % 2 != 0) {
//             oddCount++;
//         }
//     }

//     // A string can be rearranged into a palindrome if there is at most one character with an odd frequency
//     if (oddCount > 1) {
//         return "NO";
//     } else {
//         return "YES";
//     }
// }

// int main() {
//     string s;
//     cin >> s;
//     cout << gameOfThrones(s) << endl;
//     return 0;
// }
