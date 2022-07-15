class Solution {
public:
    bool isvalid(int i,int j,vector<vector<char>>& grid,int n,int m)
    {
        if(i>=0 && j>=0 && i<n && j<m && grid[i][j]=='1')
        {
            return true;
        }
        return false;
    }
    void dfs(int i,int j,vector<vector<char>>& grid,int n,int m)
    {
        // area++;
        grid[i][j]='0';
        
        if(isvalid(i+1,j,grid,n,m))
        {
            dfs(i+1,j,grid,n,m);
        }
        if(isvalid(i-1,j,grid,n,m))
        {
            dfs(i-1,j,grid,n,m);
        }
        if(isvalid(i,j+1,grid,n,m))
        {
            dfs(i,j+1,grid,n,m);
        }
        if(isvalid(i,j-1,grid,n,m))
        {
            dfs(i,j-1,grid,n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int area=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // int area=0;
                if(grid[i][j]=='1')
                {
                    area++;
                    dfs(i,j,grid,n,m);
                    // ans=max(ans,area);
                }
            }
        }
        return area;
        
    }
};