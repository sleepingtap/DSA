class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n));
        dp[0][0]=triangle[0][0];
        for(int j=1;j<n;j++)
        {
            dp[0][j]=10009;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int l=10009;
                if(j-1>=0)
                {
                    l=dp[i-1][j-1];
                }
                if(j<i+1)
                {
                    dp[i][j]=(min(dp[i-1][j],l)+triangle[i][j]);
                }
                else
                {
                    dp[i][j]=10009;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=dp[n-1][0];
        for(int j=1;j<n;j++)
        {
            ans=min(ans,dp[n-1][j]);
        }
        return ans;
    }
};