// BINARY SEARCH ON ANSWER
//  [3,6,7,11], h = 8      low=1   high=11
//  mid=(11+1)/2=6
//  mein usse 6 banana per hr khila rhi
//  1+1+2+2=6 hrs which is less thn 8 so, 6 ko humstore krwa lenge ab hum left side jaayenge toh ab high = 5
//  mid=3
//  1+2+3+4=10 and so on
//  calculation---->>>>>if(piles[i]%mid==0){
//     time=time+piles[i]/mid;
// }
// else{
//     time=time+piles[i]/mid+1;
// }

// bool isPossible(int mid, vector<int>&piles, int h){
//         long long time=0;
//         for(int i=0; i<piles.size();i++){
//             if(piles[i]%mid==0){
//                 time=time+piles[i]/mid;
//             }
//             else{
//                 time=time+piles[i]/mid+1;
//             }
//         }
//         if(time<=h) return true;
//         else return false;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//         long long low=1;
//         long high=piles[0];
//         for(int i=0; i<n; i++){
//             if(piles[i]>high) high=piles[i];
//         }
//         long long ans=0;
//         while(low<=high){
//             long long mid=(low+high)/2;
//             if(isPossible(mid,piles,h)==true){
//                 ans=mid;
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return ans;
//     }