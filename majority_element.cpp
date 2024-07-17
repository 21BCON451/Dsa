// majority element mein jiss element ki frequency n / 2 se jyada ho by moore voting algo jo bhi ans mana h agr vo array mein h toh cnt ko badha do wrna ghta do

//  int cnt=0;
//         int ele;
//         for(int i=0; i<nums.size(); i++){
//             if(cnt==0){
//                 cnt=1;
//                 ele=nums[i];
//             }
//             else if(nums[i]==ele){
//                 cnt++;
//             }
//             else cnt--;
//         }
// now checking the given element is majority or not
//         int cnt1=0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==ele){
//                 cnt1++;
//             }
//         }
//         if(cnt1>(nums.size()/2)) return ele;
//         return -1;

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.  so that means ek ya 2 majority element ho skta h
