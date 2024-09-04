// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         if(n<2)
//         return nums;
//         vector<int> ans(n);
//         int pref=1,post=1;
//         for(int i=0;i<n;i++)
//         {
//             ans[i]=pref;
//             pref*=nums[i];
//         }
//         for(int i=n-1;i>=0;i--)
//         {
//             ans[i]*=post;//here we multiuply the prefix to postfix
//             post*=nums[i];
//         }
//         return ans;
//     }
// // };