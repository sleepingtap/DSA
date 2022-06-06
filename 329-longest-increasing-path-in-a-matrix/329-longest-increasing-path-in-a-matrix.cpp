class Solution {
public:
    int dfs(int x,int y,vector<vector<int>>& matrix,vector<vector<int>>&dp,int &n,int &m)
    {
        if(dp[x][y]!=0)
        {
            return dp[x][y];
        }
        
        vector<vector<int>>dir={{-1,0},{0,1},{1,0},{0,-1}};
        int ans=1;
        for(int i=0;i<4;i++)
        {
            int X=x+dir[i][0];
            int Y=y+dir[i][1];
            if(X<0 || Y<0 || X>=n || Y>=m)
            {
                continue;
            }
            if(matrix[X][Y]<=matrix[x][y])
            {
                continue;
            }
            ans=max(ans,1+dfs(X,Y,matrix,dp,n,m));
        }
        return dp[x][y]=ans;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,0));
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res=max(res,dfs(i,j,matrix,dp,n,m));
            }
        }
        return res;
    }
};