class Solution {
public:
    int f(vector<int>& nums,int i,int j,vector<vector<int>>&dp)
    {
        if(i==j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int maxi=INT_MIN;
        for(int k=i;k<=j-1;k++)
        {
            int temp=f(nums,i,k,dp)+f(nums,k+1,j,dp)+nums[i-1]*nums[k]*nums[j];
            maxi=max(maxi,temp);
        }
        return dp[i][j]=maxi;
    }
    int maxCoins(vector<int>& nums) 
    { 
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(nums,1,n-1,dp);
        
    }
};