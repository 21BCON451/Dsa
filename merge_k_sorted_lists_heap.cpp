// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]
// Explanation: The linked-lists are:
// [
//   1->4->5,
//   1->3->4,
//   2->6
// ]
// merging them into one sorted list:
// 1->1->2->3->4->4->5->6

// // brute mein ek new linked lists bana lo
// // optimised way isme hum inhi ke link ko change kr de
// // sbse pehle min heap banao aur top elements ko push kr do phir 1->next ko heap mein push krwa do aur 1 ko pop phir 2->next ko push krwa do
// // 1->1->2->3->4->4->5->6

// // ek dummy ka node banayenge
// class Solution
// {
// public:
//   ListNode *mergeKLists(vector<ListNode *> &lists)
//   {
//     int n = lists.size();
//     if (n == 0)
//       return NULL;
//     //   node ka data aur complete data jisse hum next ko store kr ske ko pair ki form mein push krenge
//     priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode *>>> pq;
//     for (int i = 0; i < n; i++)
//     {
//       if (lists[i] != NULL)
//       {
//         int data = lists[i]->val;
//         pq.push({data, lists[i]});
//       }
//     }
//     ListNode *dummy = new ListNode(-1);
//     ListNode *head = dummy;
//     while (!pq.empty())
//     {
//       auto it = pq.top();
//       pq.pop();
//       ListNode *node = it.second;
//       dummy->next = node;
//       dummy = dummy->next;
//       if (node->next)
//       {
//         int data = node->next->val;
//         pq.push({data, node->next});
//       }
//     }
//     return head->next;
//   }
// };