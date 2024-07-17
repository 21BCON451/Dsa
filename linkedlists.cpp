// #include <iostream>
// using namespace std;
// struct node
// {
//   int data;
//   node *next;
//   node(int x)
//   {
//     data = x;
//     next = NULL;
//   }
// };
// node *insertAtbegin(node *head, int x)
// {
//   node *temp = new node(x);
//   temp->next = head;
//   return temp;
// }
// node *insertAtEnd(node *head, int x)
// {
//   node *temp = new node(x);
//   node *curr = head;
//   if (head == NULL)
//   {
//     return temp;
//   }
//   while (curr != NULL)
//   {
//     curr = curr->next;
//   }
//   curr->next = temp;
//   return head;
// }

// node *deleteHead(node *head)
// {
//   if (head == NULL)
//     return NULL;
//   node *temp = head;
//   head = head->next;
//   delete temp;
//   return head;
// }
// void print(node *head)
// {
//   node *curr = head;
//   while (curr != NULL)
//   {
//     cout << curr->data << " ";
//     curr = curr->next; // agli node pe move krenge
//   }
//   cout << endl;
// }
// int main()
// {
//   node *head = new node(10);
//   node *temp1 = new node(20);
//   node *temp2 = new node(30);
//   head->next = temp1; // ye link banayega kyunki ye LHS mein h agr yhi ye RHS mein hota toh pointer banata
//   temp1->next = temp2;
//   print(head);
//   head = insertAtbegin(head, 100);
//   print(head);
// }
