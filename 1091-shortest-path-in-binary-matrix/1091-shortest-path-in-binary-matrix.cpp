class Solution {
public:
    bool isValidPoint(int x, int y, int n, int m) 
    {
        return x >= 0 && x <= n && y >= 0 && y <= m;
    }
     int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
     {
         
         
         int n=grid.size()-1;
         int m=grid[0].size()-1;
         if(grid[0][0]==1 || grid[n][m]==1)
         {
             return -1;
         }
         int dx[8]={-1,-1,-1,0,0,1,1,1};
         int dy[8]={-1,0,1,-1,1,-1,0,1};
         queue<vector<int> > q;
         vector<int> curr;
         
         q.push({0, 0});
         grid[0][0] = 1;
        cout<<grid[n][m]<<endl;
         while (!q.empty())// && !grid[n][m]) 
         {
             cout<<!grid[n][m]<<endl;
            curr = q.front();
            q.pop();
            
            for (int i = 0; i < 8; i++) 
            {
                int x = curr[0] + dx[i];
                int y = curr[1] + dy[i];
                
                if (isValidPoint(x, y, n, m) && grid[x][y] == 0) 
                {
                    grid[x][y] = grid[curr[0]][curr[1]] + 1;
                    q.push({x, y});
                }
            }
         }
         if(grid[n][m])
         {
             return grid[n][m];
         }
         return -1;
         //return grid[n][m] ? grid[n][m] : -1;
         
     }
 
//     void solve(int i,int j,int &c,int n,vector<vector<int>> &vis,vector<vector<int>>& grid,vector<int> &count)
//     {
//         if(i==n-1 && j==n-1)
//         {
//             if(c!=1)
//                 count.push_back(c);
//             return;
//         }
//         if(i+1<n && !vis[i+1][j] && grid[i+1][j]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i+1,j,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
            
//         }
//         if(i+1<n && j+1<n && !vis[i+1][j+1] && grid[i+1][j+1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i+1,j+1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(j+1<n && !vis[i][j+1] && grid[i][j+1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i,j+1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(i-1>=0 && j+1<n && !vis[i-1][j+1] && grid[i-1][j+1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i-1,j+1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i-1,j,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(i-1>=0 && j-1>=0 && !vis[i-1][j-1] && grid[i-1][j-1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i-1,j-1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i,j-1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//         if(i+1<n  && j-1>=0 && !vis[i+1][j-1] && grid[i+1][j-1]==0)
//         {
//             c++;
//             vis[i][j]=1;
//             solve(i+1,j-1,c,n,vis,grid,count);
//             vis[i][j]=0;
//             c--;
//         }
//     }
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
//     {
//         int n=grid.size();
//         if(n==1)
//         {
//             if(grid[0][0]==0)
//                 return 1;
//             return -1;
//         }
//         if(grid[n-1][n-1]==1)
//         {
//             return -1;
//         }
//         int c=-1;
//         vector<vector<int>>vis(n,vector<int>(n,0));
//         vector<int>count;
//         if(grid[0][0]==0)
//         {
//             c=1;
//             solve(0,0,c,n,vis,grid,count);
//             if(count.size()==0)
//             {
//                 return -1;
//             }
//             c=count[0];
//             for(int i=1;i<count.size();i++)
//             {
//                 c=min(c,count[i]);
//             }
           
//         }
//         return c;
//     }
};