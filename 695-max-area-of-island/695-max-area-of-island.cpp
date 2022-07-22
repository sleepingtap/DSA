class Solution {
public:
    bool isvalid(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
        {
            return false;
        }
        return true;
    }
    void f(int i,int j,vector<vector<int>>& grid,int &c)
    {
        grid[i][j]=0;
        c++;
        if(isvalid(i+1,j,grid))
        {
            f(i+1,j,grid,c);
        }
        if(isvalid(i-1,j,grid))
        {
            f(i-1,j,grid,c);
        }
        if(isvalid(i,j+1,grid))
        {
            f(i,j+1,grid,c);
        }
        if(isvalid(i,j-1,grid))
        {
            f(i,j-1,grid,c);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        
        int area=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int c=0;
                    f(i,j,grid,c);
                    area=max(area,c);
                }
            }
        }
        return area;
    }
};