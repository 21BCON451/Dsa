/////////////////MOST IMPORTANT////////////////
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         //set-based approach
//         //form a set Node* type ka set
//         // 3 node set mein h nhi h toh dhaal denge
//         //     phir 2 phir 0 phir -4 phir 2 toh 2 h iska mtlb true h
//         unordered_set<Node *> s;
//         Node* curr=head;
//         while(curr!=NULL){
//             if(s.find(curr)!= s.end()) return true;
//             s.insert(curr);
//             curr=curr->next;
//         }
//         return false;

// 2nd approach but it will disturb all the nodes
//         if(head==NULL) return false;;
//         ListNode* curr=head;
//         ListNode* temp=new ListNode(-1);

//         while(curr){
//             if(curr->next==temp) return true;
//             ListNode* next=curr->next;
//             curr->next=temp;
//             curr=next;
//         }
//         return false;

// 3rd approach floyds detect loop algo

// 2 pointers slow ko 1 step aage move krenge aur fast ko 2 step move krenge
//  ListNode* slow=head;
//  ListNode * fast=head;
//  while(fast!=NULL && fast->next!=NULL){
//      slow=slow->next;
//      fast=fast->next->next;
//      if(slow==fast) return true;
//  }
//  return false;
//     }
// };

// return the 1st node of cycle
//  class Solution {
//  public:
//      ListNode *detectCycle(ListNode *head) {
//         //sbse pehle toh floyd jaisa bola tha vo hoga phir slow ko 0th index pe le aayenge aur dono ko same speed se run krwayenge
//          if(head==NULL || head->next==NULL) return NULL;
//          ListNode* slow=head;
//   ListNode * fast=head;
//   while(fast && fast->next){
//       slow=slow->next;
//       fast=fast->next->next;
//       if(slow==fast) break;
//   }
//          if(slow!=fast) return NULL;
//          slow=head;
//          while(slow!=fast){
//              slow=slow->next;
//              fast=fast->next;
//          }
//          return slow;
//      }
//  };

/// remove loop

// class Solution
// {
//     public:
//     //Function to remove a loop in the linked list.
//     void removeLoop(Node* head)
//     {
//         if(head==NULL || head->next==NULL) return;
//         Node* slow=head;
//         Node* fast=head;
//         while(fast and fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) break;
//         }
//         if(slow!=fast) return;
//         slow=head;
//         if(slow==fast){
//             while(fast->next!=slow){
//                 fast=fast->next;
//             }
//             fast->next=NULL;
//             return;
//         }
//          while(slow->next!=fast->next){
//             slow=slow->next;
//             fast=fast->next;
//         }
//         fast->next=NULL;
//         // code here
//         // just remove the loop without losing any nodes
//     }
// };