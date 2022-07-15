// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
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
        
        if(isvalid(i+1,j-1,grid,n,m))
        {
            dfs(i+1,j-1,grid,n,m);
        }
        if(isvalid(i+1,j+1,grid,n,m))
        {
            dfs(i+1,j+1,grid,n,m);
        }
        if(isvalid(i-1,j-1,grid,n,m))
        {
            dfs(i-1,j-1,grid,n,m);
        }
        if(isvalid(i-1,j+1,grid,n,m))
        {
            dfs(i-1,j+1,grid,n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(i,j,grid,n,m);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends