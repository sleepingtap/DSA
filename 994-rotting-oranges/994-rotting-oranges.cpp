class Solution {
public:
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
        int c=0;
   
        while(!q.empty())
        {
          
            int p=q.size();
            while(p--)
            {
            int i=q.front().first;
            int j=q.front().second;
            int f1=0,f2=0,f3=0,f4=0;
           // int p=q.size();
            q.pop();
            if(i+1<n && grid[i+1][j]==1)
            {
                grid[i+1][j]=2;
                q.push({i+1,j});
                cout<<i+1<<" "<<j<<endl;
                f1=1;
            }
            if(i-1>=0 && grid[i-1][j]==1)
            {
                grid[i-1][j]=2;
                q.push({i-1,j});
                 cout<<i-1<<" "<<j<<endl;
                f2=1;
            }
            if(j+1<m && grid[i][j+1]==1)
            {
                grid[i][j+1]=2;
                q.push({i,j+1});
                 cout<<i<<" "<<j+1<<endl;
                f3=1;
            }
            if(j-1>=0 && grid[i][j-1]==1)
            {
                grid[i][j-1]=2;
                q.push({i,j-1});
                 cout<<i<<" "<<j-1<<endl;
                f4=1;
            }
            }
            if(!q.empty())
            {
                c++;
            }

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
        return c;
        
    }
};