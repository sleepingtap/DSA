class Solution {
public:
    bool isvalid(int i,int j,vector<vector<int>>& grid,int n,int m)
    {
        if(i<0 || j<0 || i>=n ||j>=m || grid[i][j]==2 || grid[i][j]==0)
        {
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        if(q.empty())
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]==1)
                    {
                        return -1;
                    }
                }
            }
            return 0;
        }
        int c=0;
        while(!q.empty())
        {
            int p=q.size();
            
            for(int i=1;i<=p;i++)
            {
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                if(isvalid(a-1,b,grid,n,m))
                {
                    q.push({a-1,b});
                    grid[a-1][b]=2;
                }
                if(isvalid(a+1,b,grid,n,m))
                {
                    q.push({a+1,b});
                     grid[a+1][b]=2;
                }
                if(isvalid(a,b-1,grid,n,m))
                {
                    q.push({a,b-1});
                     grid[a][b-1]=2;
                }
                if(isvalid(a,b+1,grid,n,m))
                {
                    q.push({a,b+1});
                     grid[a][b+1]=2;
                }
            }
            c++;
            // cout<<c<<" ";
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return c-1;
    }
};