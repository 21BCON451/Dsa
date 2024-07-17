// int n = arr.size();
// vector<int> ans;
// // pair banayenge jisme difference ko store krwayenge aur indexes ko
// priority_queue<pair<int, int>> pq;
// // pehle k element ko process krenge
// for (int i = 0; i < k; i++)
// {
//   int diff = abs(arr[i] - x);
//   pq.push({diff, i});
// }
// for (int i = k; i < n; i++)
// {
//   int diff = abs(arr[i] - x);
//   if (pq.top().first > diff)
//   {
//     pq.pop();
//     pq.push({diff, i});
//   }
// }
// while (!pq.empty())
// {
//   int index = pq.top().second;
//   pq.top();
//   ans.push_back(arr[index]);
// }
// sort(ans.begin(), ans.end());
// return ans;