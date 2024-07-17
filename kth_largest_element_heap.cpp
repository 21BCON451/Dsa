// pehle push krna h phir k-1 ko pop kr do toh jo top pe aayega usse return krwa do   nlogn

// optimsed mein hum max heap ki jgh min heap banayenge
// phir pehle k element ko push krwa do phir i=k se iterate kro phir agr curr element bada h heap ke top se toh curr element ko push krwa do aur heap ke top wale ko pop krwa do   nlog k

// kth largest===minheap
// kth smallest==maxheap
// max-heap se krnege toh minus ka sign lenge
// priority_queue<int> pq;
// int n = nums.size();
// for (int i = 0; i < k; i++)
// {
//   pq.push(-nums[i]);
// }
// for (int i = k; i < n; i++)
// {
//   if (-nums[i] < pq.top())
//   {
//     pq.pop();
//     pq.push(-nums[i]);
//   }
// }
// return -pq.top();
//}