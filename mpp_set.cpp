// set doesn't allowed duplicates no.
// unordered set based on hashing///ordered set based on binary serach trees and has time-comlexity logn but unordered set has 1
// unordered_set<int> s
// ordered set--- set<int> s
// find function 10 ka pointer return krega aur agr 10 nhi h toh ye ek pointer dega jo last se agla pointer dega jo ki end() se milega
// if(s.find(10)!=s.end()){

// }

// no. of unique elemnets
//  vector<int> arr={1,1,2,2,3,1,4};
//  unordered_set<int> s;
//  for(int i=0; i<arr.size();i++){
//    s.insert(arr[i]);
//  }

// MAP- used to store key value pair//ordered map mein sorted order key ke base pe values aayegi

// unordered_map<int,string> mp;
// mp[10]="abc";
// OR         key=10 value=abc
// mp.insert(10, "abc")
// for(auto x:mp){
//    toh ab key chahiye toh x.first aur value ke liye x.second
// }                                                                     //find is same as set

// an array is given print the frequency of elements
//  vector<int> arr={1,2,3,4,1,2,3,5};
//  unordered_map<int,int> mp;
//  for(int i=0, i<n; i++){
//    mp[arr[i]]++;   mp[1]++  1->0   phir 1->1
//  }
// for(auto x:mp){
//   cout<<x.first<<x.second;
// }