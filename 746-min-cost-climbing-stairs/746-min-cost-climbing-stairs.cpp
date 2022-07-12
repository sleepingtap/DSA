class Solution {
public: 
    int f(int ind,vector<int>& cost,vector<int>&dp)
    {
        if(ind>=cost.size())
        {
            return 0;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        int l=cost[ind]+f(ind+1,cost,dp);
        int r=cost[ind]+f(ind+2,cost,dp);
        return dp[ind]=min(l,r);
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(f(0,cost,dp),f(1,cost,dp));
    }
};