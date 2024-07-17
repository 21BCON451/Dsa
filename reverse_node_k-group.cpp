// ListNode* solve(ListNode* head, int count, int k){
//   if(k>count) return head;
//   if(head==NUL || head->next==NULL) return head;
//   ListNode* prev=NULL;
//   ListNode* curr=head;
//   int a=0;//kyunki mujhe saari list ko reverse nhi krna h
//   while(curr && a<k){
//     ListNode* next=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=next;
//     a++;
//   }
//   head->next=solve(curr, count-k,k);
//   return prev;
// }

// ListNode* reverseKGroup(ListNode* head, int k){
//   int count=0;
//   ListNode* curr=head;
//   while(curr){
//     count++;
//     curr=curr->next;
//   }
//   return solve(head,count, k);
// }

// ab variant aate h isme
//     jaise 1->2->3->4->5->6->7->8 toh humare acc ans 3->2->1->6->5->4->7->8 aa rha lekin hume ye chahiye 1->2->3->4->5->6->8->7

// ListNode* solve(ListNode* head,  int k){

//   if(head==NULL || head->next==NULL) return head;
//   ListNode* prev=NULL;
//   ListNode* curr=head;
//   int a=0;//kyunki mujhe saari list ko reverse nhi krna h
//   while(curr && a<k){
//     ListNode* next=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=next;
//     a++;
//   }
//   head->next=solve(curr, k);
//   return prev;
// }

// ListNode* reverseKGroup(ListNode* head, int k){
//   return solve(head,k);
// }

// 3rd variant

// alternatively reverse krne h k-node ko  1->2->3->4->5->6
// 2->1->3->4->6->5

// ListNode* solve(ListNode* head,  int k){

//   if(head==NULL || head->next==NULL) return head;
//   ListNode* prev=NULL;
//   ListNode* curr=head;
//   int a=0;//kyunki mujhe saari list ko reverse nhi krna h
//   while(curr && a<k){
//     ListNode* next=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=next;
//     a++;
//   }
// //   head->next=curr;
// for(int i=0; i<k-1; i++){
//   curr=curr->next;//isse hum 4 pe aa jaayenge
//   if(curr==NULL) return prev;
// }
// curr->next=solve(curr->next,k);
// return prev;
// }

// ListNode* reverseKGroup(ListNode* head, int k){
//   return solve(head,k);
// }
