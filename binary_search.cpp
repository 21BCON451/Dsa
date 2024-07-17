// 1 2 3 4 5 6
// low=0
// high=5
// target=5
// mid=low+high/2=0+5/2=2
// low=mid+1
// mid=3+5/2=4

// frequency=lastOcurrence-highOcurrence+1

// time complexity=O(logn)

// Find First and Last Position of Element in Sorted Array

// Search in Rotated Sorted Array( KOI BHI EK PART LE LO DONO MEIN SE KOI TOH SORT HOGA HI) mid ko low se comapre krenge agr mid>=low h toh left part sorted h wrna right part aur low=mid+1 phir  check krna h ki left mein jaana h ya right mein toh element ko mid se compare krenge aur phir waapis mid nikalenge phir aise hi krte jaayenge
// ye tbhi h jb duplicate elments na ho
// int n=nums.size();
// int low=0;
// int high=n-1;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(nums[mid]==target) return mid;
//     //left part is sorted
//     if(nums[low]<=nums[mid]){
//         if(nums[low]<=target && target<=nums[mid] ){
//             high=mid-1;

//         }
//         else{
//             low=mid+1;
//         }
//     }
//     //right part is sorted
//     else{
//         if(nums[mid]<=target && target<=nums[high]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
// }
// return -1;

// jb duplicates element hoo toh low ko ek aage bdha denge aur high ko ek ghata denge
// bool search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int low=0;
//         int high=n-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==target) return true;
//             if(nums[mid]==nums[low] && nums[mid]==nums[high]){
//                 low++;
//                 high--;
//                 continue;
//             }
//             //left part is sorted
//             if(nums[low]<=nums[mid]){
//                 if(nums[low]<=target && target<=nums[mid] ){
//                     high=mid-1;

//                 }
//                 else{
//                     low=mid+1;
//                 }
//             }
//             //right part is sorted
//             else{
//                 if(nums[mid]<=target && target<=nums[high]){
//                     low=mid+1;
//                 }
//                 else{
//                     high=mid-1;
//                 }
//             }
//         }
//         return -1;
//     }