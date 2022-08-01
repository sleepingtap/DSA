class Solution {
public:
    int f(int index,int sum,vector<int>& nums,int ans,vector<vector<int>>&dp)
    {
        if(index>=nums.size())
        {
            ans=max(ans,sum);
            return ans;
        }
        if(dp[index][sum]!=-1)
        {
            return dp[index][sum];
        }
        int l=f(index+2,sum+nums[index],nums,ans,dp);
        int r=f(index+1,sum,nums,ans,dp);
        return dp[index][sum]=max(l,r);
    }
    
    int rob(vector<int>& nums) 
    {
        vector<vector<int>>dp(nums.size()+1,vector<int>(40000,-1));
        return f(0,0,nums,0,dp);
    }
};