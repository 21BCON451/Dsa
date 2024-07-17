// // 1 element aaya median:1
// // phir 3 aaya median: 2
// // phir 2 aaya toh sirt hua 1 2 3 median:2

// class MedianFinder
// {
// public:
//   priority_queue<int> left;
//   priority_queue<int, vector<int>, greater<int>> right;
//   MedianFinder()
//   {
//     // kuch nhi likhna hota
//   }

//   void addNum(int num)
//   {
//     if (left.size() == 0 && right.size() == 0)
//     {
//       left.push(num);
//     }
//     else
//     {
//       if (left.size() == right.size())
//       {
//         if (num <= right.top())
//         {
//           left.push(num);
//         }
//         else
//         {
//           left.push(right.top());
//           right.pop();
//           right.push(num);
//         }
//       }
//       else
//       {
//         if (num >= left.top())
//         {
//           right.push(num);
//         }
//         else
//         {
//           right.push(left.top());
//           left.pop();
//           left.push(num);
//         }
//       }
//     }
//   }

//   double findMedian()
//   {
//     if (left.size() != right.size())
//     {
//       return left.top();
//     }
//     else
//     {
//       return (left.top() + right.top()) / 2.0; // ye automatically double bana dega
//     }
//   }
// };