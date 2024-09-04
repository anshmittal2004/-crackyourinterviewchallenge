
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxi=prices[0],profit=0;
//         for(int i=1;i<prices.size();i++)
//         {
//          if(maxi>prices[i])
//          maxi=prices[i];

//          profit=max(profit,prices[i]-maxi);
//         }
//         return profit;
//     }
// };