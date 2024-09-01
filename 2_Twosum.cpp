// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target)
//      {
//        unordered_map<int, int> num_map;
//         vector<int> result;

//         for (int i = 0; i < nums.size(); i++) {
//             int complement = target - nums[i];

//             // Check if the complement exists in the map
//             if (num_map.find(complement) != num_map.end()) {
//                 result.push_back(num_map[complement]);
//                 result.push_back(i);
//                 return result;
//             }

//             // Store the index of the current number
//             num_map[nums[i]] = i;
//         }

//         return result; // Return empty if no solution is found
//     }
// };