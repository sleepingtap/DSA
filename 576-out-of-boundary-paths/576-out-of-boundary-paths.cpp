class Solution {
public:
   // int mx = 1e9+7;
   long long int f( int i, int j,int maxMove,int m, int n,vector<vector<vector<long long int>>>&dp)
    {
        if(i<0 || j<0 || i==m || j==n)
        {
            return 1;
        }
        if(maxMove==0)
        {
            return 0;
        }
        if(dp[maxMove][i][j]!=-1)
        {
            return dp[maxMove][i][j];
        }
        long long int a=f(i-1,j,maxMove-1,m,n,dp)%1000000007;
        long long int b=f(i+1,j,maxMove-1,m,n,dp)%1000000007;
        long long int c=f(i,j+1,maxMove-1,m,n,dp)%1000000007;
        long long int d=f(i,j-1,maxMove-1,m,n,dp)%1000000007;
        return dp[maxMove][i][j]=(a%1000000007+b%1000000007+c%1000000007+d%1000000007)%1000000007;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) 
    {
        vector<vector<vector<long long int>>>dp(maxMove+1,vector<vector<long long int>>(m+1,vector<long long int>(n+1,-1)));
        return f(startRow,startColumn,maxMove,m,n,dp)%1000000007;

    }
};