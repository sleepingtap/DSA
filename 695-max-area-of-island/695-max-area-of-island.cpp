class Solution {
public:
    bool isvalid(int i,int j,vector<vector<int>>& grid,int n,int m)
    {
        if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1)
        {
            return true;
        }
        return false;
    }
    void dfs(int i,int j,vector<vector<int>>& grid,int n,int m, int &area)
    {
        area++;
        grid[i][j]=0;
        
        if(isvalid(i+1,j,grid,n,m))
        {
            dfs(i+1,j,grid,n,m,area);
        }
        if(isvalid(i-1,j,grid,n,m))
        {
            dfs(i-1,j,grid,n,m,area);
        }
        if(isvalid(i,j+1,grid,n,m))
        {
            dfs(i,j+1,grid,n,m,area);
        }
        if(isvalid(i,j-1,grid,n,m))
        {
            dfs(i,j-1,grid,n,m,area);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int area=0;
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid,n,m,area);
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};