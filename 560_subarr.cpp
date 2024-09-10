// class {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int pref=0;
//         int cnt=0,rem=0,sum=0;
//         unordered_map<int,int> mp;
//         mp[0]=1;

//         for(int i:nums)
//         {
//           pref+=i;
//         //   if(pref==k)
//         //   cnt++;
//           rem=pref-k;
//           if(mp.find(rem)!=mp.end())
//           {
//             cnt+=mp[rem];
//           }
//           mp[pref]+=1;
//         }
//         return cnt;
//     }
// };