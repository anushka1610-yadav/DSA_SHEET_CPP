class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int s=0,r=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            r=s%k;
            if(r<0)
            {
                r+=k;
            }
            if(mp.find(r)!=mp.end())
            {
                ans+=mp[r];
                mp[r]=mp[r]+1;
            }
            else
            {
                mp[r]=1;
            }
        }
        return ans;
    }
};