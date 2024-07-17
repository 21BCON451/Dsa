// brute approach
// [ 7, 1, 5, 3, 6, 4 ] profit, p = 0 and then at every day buy and sell on another day and then comparison of max profit
// ans=0
// for (i = 0 to n)
// {
//   for (j = i + 1 to n)
//   {
//     p = a[j] - a[i];
//     ans = max(ans, p);
//   }
// }

// optimal approach
//  hum daily stock ko sell krenge aur dekhenge ki max kb milega
//  int mini=prices[0];
//         int maxProfit=0;
//         int n=prices.size();
// for(int i=1; i<n;i++){
//  mini=7  ans=0
//  p=1-7=-6           (max(ans,p))  int cost=prices[i]-mini;maxProfit=max(maxProfit, cost);
// mini=min(mini,prices[i]);
//  then mini=1 ans=0    (min(7 or 1))
//  p=5-1=4               (max(ans,p))
//  then mini=1 ans=4    (min(5 or 1))
//  p=3-1=2              (max(ans,p))
//  then mini=1 ans=4     (min(3 or 1))
//  p=6-1=5              (max(ans,p))
// return maxProfit;

//  Best Time to Buy and Sell Stock II ====isme hum ek saath do baaar stock ko hold nhi kr skte
//  prices = [7,1,5,3,6,4]
// pehle 7 or 1 mein pehle din price jyada h aur aaj km h toh rehne denge
// phir 1 or 5 ko dekhenge toh profit 5-1=4 ho jaayega
// int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int ans=0;
//         for(int i=1; i<n; i++){
//             if(prices[i-1]<prices[i]){
//                 int profit=prices[i]-prices[i-1];
//                 ans=ans+profit;
//             }
//         }
//         return ans;
//     }
