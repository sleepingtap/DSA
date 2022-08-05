class Solution {
public:
    int f(int index,vector<int>& nums, int target,vector<vector<int>>&dp)
    {
        if(target==0)
        {
            return 1;
        }
        
        if(target<0)
        {
            return 0;
        }
        if(index==nums.size())
        {
            return 0;
        }
        if(dp[index][target]!=-1)
        {
            return dp[index][target];
        }
        int l=f(0,nums,target-nums[index],dp);
        int r=f(index+1,nums,target,dp);
        return dp[index][target]=l+r;
    }
    
    int combinationSum4(vector<int>& nums, int target) 
    {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));
        return f(0,nums,target,dp);
    }
};