// // grid given and row by row travel 1st row ke liye height aur max area calculate kr lenge phir aise hi sbhi row level by level traversal krenge

// // 1 d vector create krenge column ke liye aur intially value 0 hogi phir jaise hi 1 mila toh update kr denge aur 0 aate hi val 0 kr denge
// //     matrix = [ [ "1", "0", "1", "0", "0" ], [ "1", "0", "1", "1", "1" ], [ "1", "1", "1", "1", "1" ], [ "1", "0", "0", "1", "0" ] ] 00000 update hokr 10100 phir 2nd row pe 20211 phir 3rd row ko 31322 phir 4th ke liye 40030

// class Solution
// {
// public:
// public:
//   vector<int> previousSmaller(vector<int> &arr)
//   {
//     int n = arr.size();
//     vector<int> ans; // storing indexes
//     stack<int> s;
//     for (int i = 0; i < n; i++)
//     {
//       while (s.empty() == false && arr[s.top()] >= arr[i])
//       {
//         s.pop();
//       }
//       if (s.empty())
//         ans.push_back(-1);
//       else
//         ans.push_back(s.top());
//       s.push(i);
//     }
//     return ans;
//   }
//   vector<int> nextSmaller(vector<int> &arr)
//   {
//     int n = arr.size();
//     vector<int> ans;
//     stack<int> s;
//     for (int i = n - 1; i >= 0; i--)
//     {
//       while (s.empty() == false && arr[s.top()] >= arr[i])
//       {
//         s.pop();
//       }
//       if (s.empty())
//         ans.push_back(n); // agr kisi ka next smaller exist nhi krta toh n
//       else
//         ans.push_back(s.top());
//       s.push(i);
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
//   }
//   int largestRectangleArea(vector<int> &heights)
//   {
//     // 🥱 2 height se 1 length ki  area=2
//     //     1 ke liye 6
//     //     5 ke liye 2
//     //     6 ke liye 1
//     //     2 ke liye 4
//     //     3 ke liye 1
//     vector<int> ps = previousSmaller(heights);
//     vector<int> ns = nextSmaller(heights);
//     int ans = 0;
//     int n = heights.size();
//     for (int i = 0; i < n; i++)
//     {
//       int len = ns[i] - ps[i] - 1;
//       int area = heights[i] * len;
//       ans = max(ans, area);
//     }
//     return ans;
//   }

//   int maximalRectangle(vector<vector<char>> &arr)
//   {
//     int n = arr.size();
//     int m = arr[0].size();
//     vector<int> v(m, 0);
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if (arr[i][j] == '1')
//         {
//           v[j]++;
//         }
//         else
//         {
//           v[j] = 0;
//         }
//       }
//       int area = largestRectangleArea(v);
//       ans = max(ans, area);
//     }
//     return ans;
//   }
// };