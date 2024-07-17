// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
// //         slow hoga aur fast hoga jaise hi fast ya fsat->next=null ho jaayega toh slow jisko point kr rha hoga usse return kr denge
// ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
// };

// abhi toh second middle ko return kr rhe the agr 1st mid ko return krna ho toh while ke loop mein change hoga usme fast->next && fast->next->next likhenge