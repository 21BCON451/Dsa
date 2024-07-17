// xor
//  a^a=0
//  a^0=a
//  a^b^c=a^c^b=b^a^c
// a^b=c==>a^c=b
// public:
//     int singleNumber(vector<int>& nums) {
//        int xor1=0;
//         for(int i=0; i<nums.size(); i++){
//             xor1=xor1^nums[i];
//         }
//         return xor1;
//     }

// nums = [2,2,1]
// xor1=0^2=2^2=0^1=1 ans=1