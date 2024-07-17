// class Solution
// {
// public:
//   ListNode *reverseList(ListNode *head)
//   {
//     // store the curr->next //isliye krwaya taaki 3 ka hold 4 se bana rhe break na ho
//     // curr->next=prev    mtlb 3 ko 2 se conect kra denge
//     //  prev=curr    prev=3
//     //      curr=next    curr=4

//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     while (curr != NULL)
//     {
//       ListNode *next = curr->next;
//       curr->next = prev;
//       prev = curr;
//       curr = next;
//     }
//     return prev;
//   }
// };