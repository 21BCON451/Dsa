// Sample Input 1

// 3
// 1 1 2
// Sample Output 1

// 2
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int lonelyinteger(vector<int> a) {
//     unordered_map<int, int> mp;
//     // Count the occurrences of each element
//     for (auto it : a) {
//         mp[it]++;
//     }
//     // Find the element that occurs exactly once
//     for (auto it : mp) {
//         if (it.second == 1) {
//             return it.first;
//         }
//     }
//     // In case there is no lonely integer (which shouldn't happen as per the problem statement)
//     return -1;
// }
