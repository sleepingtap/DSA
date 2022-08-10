class Solution {
public:
    int loninc(int index,int prev,vector<int>& nums,int n,vector<vector<int>>&dp)
    {
        if(index==n)
        {
            return 0;
        }
       // if(prev>=0)
        if(dp[index][prev+1]!=-1)
        {
            return dp[index][prev+1];
        }
       
        int l=INT_MIN;
        if(prev==-1 || nums[index]>nums[prev])
        {
            l=1+loninc(index+1,index,nums,n,dp);
        }
        int r=loninc(index+1,prev,nums,n,dp);

        return dp[index][prev+1]=max(l,r);      
    }
    int lengthOfLIS(vector<int>& nums) 
    {
       int n=nums.size();
       vector<vector<int>>dp(n+1,vector<int>(n+1,-1)); 
       int prev=-1; 
       return loninc(0,prev,nums,n,dp);
        
    }
};