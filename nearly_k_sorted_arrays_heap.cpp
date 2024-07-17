// k = 3, arr[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// toh jo deviation hoga sort ke baad vo [i-k, i+k] tk hoga range mein
// min position toh i - k tk jaa skti h aur max i + k th position tk jaayega
// vector<int> nearlySorted(int arr[], int n, int k)
// {
//   // Your code here
//   // k+1 element ko push krwate rho aur phir smallest elemnt ko pop krwate jaao
//   vector<int> ans;
//   priority_queue<int, vector<int>, greater<int>> pq;
//   for (int i = 0; i <= k; i++)
//   {
//     pq.push(arr[i]);
//   }
//   for (int i = k + 1; i < n; i++)
//   {
//     ans.push_back(pq.top());
//     pq.pop();
//     pq.push(arr[i]);
//   }
//   while (!pq.empty())
//   {
//     ans.push_back(pq.top());
//     pq.pop();
//   }
//   return ans;