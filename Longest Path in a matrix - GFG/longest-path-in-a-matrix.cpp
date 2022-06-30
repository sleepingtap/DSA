// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int dfs(int p,int q,vector<vector<int>>& matrix,vector<vector<int>>&dp,int &n,int&m)
    {
        if(dp[p][q]!=0)
        {
            return dp[p][q];
        }
        int res=1;
        vector<vector<int>>dirs={{-1,0},{0,1},{1,0},{0,-1}};
        for(int i=0;i<4;i++)
        {
            int X=p+dirs[i][0];
            int Y=q+dirs[i][1];
            if(X<0 || Y<0 || X>=n || Y>=m || matrix[X][Y]<=matrix[p][q])
            {
                continue;
            }
            
            res=max(res,1+dfs(X,Y,matrix,dp,n,m));
        }
        return dp[p][q]=res;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,dfs(i,j,matrix,dp,n,m));
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends