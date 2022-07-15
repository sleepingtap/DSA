class Solution {
public:
    
    bool isValid(int i, int j, vector<vector<int>>& grid, int m, int n )
    {
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j] == 1)
        {
            return true;
        }
        return false;
    }
    
    int dfs(int i, int j,vector<vector<int>>& grid, int m, int n,int &count )
    {
        grid[i][j] = 0;
        count++;
      //  cout<<i<<" "<<j<<" "<<count<<endl;
        
        if(isValid(i+1,j,grid,m,n))
        {
            dfs(i+1,j,grid,m,n,count);
        }
        if(isValid(i-1,j,grid,m,n))
        {
            dfs(i-1,j,grid,m,n,count);
        }
        if(isValid(i,j+1,grid,m,n))
        {
            dfs(i,j+1,grid,m,n,count);
        }
        if(isValid(i,j-1,grid,m,n))
        {
            dfs(i,j-1,grid,m,n,count);
        }
        return count;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        
        int ans =0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 0)
                {
                    continue;
                }
                else if(grid[i][j] == 1)
                {
                    int count =0;
                  dfs(i,j,grid,m,n,count);
                   // cout<<v<<endl;
                    ans = max(ans, count);
                }
            }
        }
        return ans;
        
    }
};