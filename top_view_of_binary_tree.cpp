// vector<int> ans;
// if (root == NULL)
//   return ans;
// map<int, int> mp;
// queue<pair<Node *, int>> q;
// q.push({root, 0}); // kyunki 1 ka level 0 h
// while (!q.empty())
// {
//   auto it = q.front(); // ye easily pair ke datatype ko store kr dega
//   q.pop();
//   Node *node = it.first;
//   int lev = it.second;
//   if (mp.find(lev) == mp.end())
//   {                       // checking if curr level is present or not
//     mp[lev] = node->data; // then data ko push kr denge
//   }
//   if (node->left)
//   {
//     q.push({node->left, lev - 1});
//   }
//   if (node->right)
//   {
//     q.push({node->right, lev + 1});
//   }
// }
// for (auto x : mp)
// {
//   ans.push_back(x.second);
// }
// return ans;

// agr void function de rkha ho toh return ans ki jgh ye add krna h--
//   for (int value : ans) {
//         cout << value << " ";
//     }