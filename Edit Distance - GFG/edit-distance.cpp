// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // int f(int i,int j,string s, string t,vector<vector<int>>&dp)
    // {
    //     if(i<0)
    //     {
    //         return j+1;
    //     }
    //     if(j<0)
    //     {
    //         return i+1;
    //     }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     if(s[i]==t[j])
    //     {
    //         return 0+f(i-1,j-1,s,t,dp);
    //     }
    //     else
    //     {
    //         int a=1+f(i,j-1,s,t,dp);
    //         int b=1+f(i-1,j,s,t,dp);
    //         int c=1+f(i-1,j-1,s,t,dp);
    //         return dp[i][j]=min(a,min(b,c));
    //     }
        
        
    // }
    int editDistance(string s, string t) 
    {
        // Code here
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=i;
        }
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=i;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=min(1+dp[i][j-1],min(1+dp[i-1][j],1+dp[i-1][j-1]));
                }
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends