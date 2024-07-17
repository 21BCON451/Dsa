// #include <iostream>
// #include <queue>
// #include <set>
// #include <vector>

// using namespace std;

// int main() {
//     int Q;
//     cin >> Q;

//     // Min-heap to store elements
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     // Set to keep track of valid elements in the heap
//     set<int> elements;

//     while (Q--) {
//         int type;
//         cin >> type;

//         if (type == 1) {
//             int x;
//             cin >> x;
//             minHeap.push(x);
//             elements.insert(x);
//         } else if (type == 2) {
//             int x;
//             cin >> x;
//             elements.erase(x);
//         } else if (type == 3) {
//             // Clean up the top of the heap if it contains invalid (deleted) elements
//             while (!minHeap.empty() && elements.find(minHeap.top()) == elements.end()) {
//                 minHeap.pop();
//             }
//             if (!minHeap.empty()) {
//                 cout << minHeap.top() << endl;
//             }
//         }
//     }

//     return 0;
// }
