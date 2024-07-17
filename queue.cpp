// queue<int> q;
// q.push(10);
// cout<<q.size();
// cout<<q.front();
// q.pop();//10 remove ho jaayega
// cout<<q.empty();

// //deque front aur back mein implement kr skte ho//random access provide
// deque<int> dq={1,2,3};   or deque<int> dq;
// dq.push_back(4);//last mein insert ho jaayega
// dq.push_front(0);//front mein push krna ho toh
// for(auto x:deque){
//   cout<<x;///print all elements
// }
// dq.pop_front();
// dq.pop_back();

// auto it:dq.begin(); //ye ek pointer bnn gya jo point kr rha h 1st element ko
// it++;//2nd element
// dq.insert(it, 200);//1st index pe 200 aa jaayega jisse pta chlta h ki ye random access provide krwata h