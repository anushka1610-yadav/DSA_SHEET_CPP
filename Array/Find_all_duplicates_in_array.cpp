// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto i=mp.begin();i!=mp.end();i++)
//         {
//             if(i->second > 1)
//             {
//                 ans.push_back(i->first);
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int ind = abs(nums[i])-1;
            int val = nums[ind];
            
            if(val<0)
            {
                ans.push_back(ind+1);
            }
            else {
                nums[ind] *= -1;
            }
        }
        return ans;
    }
};