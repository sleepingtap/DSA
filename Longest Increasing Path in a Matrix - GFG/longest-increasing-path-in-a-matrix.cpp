// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
// class Solution {
//  public:
//   int longestIncreasingPath(vector<vector<int>>& matrix, int numRows, int numCols) {

//       // Code here
//       vector<vector<int>> dp = vector<vector<int>>(numRows, vector<int>(numCols, -1));
//       int longestPath = 1;
//       for(int row = 0; row < numRows; row++)
//       {
//           for(int col = 0; col < numCols; col++)
//           {
//               if(dp[row][col] == -1)
//               {
//                   longestPath = max(longestPath, dfs(matrix, row, col, dp));
//               }
//           }
//       }
       
       
//       return longestPath;
//   }
   
//   private:
//   int dx[4] = {1,0,-1,0};
//   int dy[4] = {0,1,0,-1};
//   int dfs(const vector<vector<int>>& matrix, int row, int col, vector<vector<int>>& dp)
//   {
//       if(dp[row][col] != -1) return dp[row][col];
       
//       int longestPath = 0;
//       for(int dir = 0; dir < 4; dir++)
//       {
//           int nextRow = row + dx[dir];
//           int nextCol = col + dy[dir];
//           if(nextRow >= 0 and nextCol >= 0 and nextRow < matrix.size() and nextCol < matrix[0].size())
//           {
//               if(matrix[nextRow][nextCol] > matrix[row][col])
//               {
//                   longestPath = max(longestPath, dfs(matrix, nextRow, nextCol, dp));
//               }
//           }
//       }
       
//       return dp[row][col] = longestPath + 1;
//   }
// };

class Solution {

    public:
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) 
    {
        if(n==0)
        {
            return 0;
        }
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==-1)
                {
                    res=max(res,dfs(i,j,matrix,dp,n,m));
                }
            }
        }
        return res;
    }
      private:
      int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
    int dfs(int x,int y,const vector<vector<int>>& matrix,vector<vector<int>>&dp,int n, int m)
    {
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        //vector<vector<int>>dir={{-1,0},{0,1},{1,0},{0,-1}};
        
        int ans=0;
        for(int i=0;i<4;i++)
        {
            int X=x+dx[i];
            int Y=y+dy[i];
            if(X>=0 && Y>=0 && X<n && Y<m)
            {
                if(matrix[X][Y]>matrix[x][y])
                {
                    ans=max(ans,dfs(X,Y,matrix,dp,n,m));
                }
            }
        }
        return dp[x][y]=ans+1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends