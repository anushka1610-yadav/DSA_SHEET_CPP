class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r=0;
        for(int i=0;i<=r;i++)
        {
            r=max(r,i+nums[i]);
            if(r>=nums.size()-1)
                return true;
        }
        return false;
        
    }
};