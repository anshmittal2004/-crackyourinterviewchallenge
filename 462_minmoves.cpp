// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//        int a = 0, b = nums.size()-1;
//        int steps=0;
//         sort(nums.begin(), nums.end());
//         while(a<b)
//         {
//          steps+=nums[b]-nums[a];
//          a++;
//          b--;
//         }
//         return steps;
//     }
// };