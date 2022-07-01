// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(int n, int x, int y, int z, vector<int> &dp){
        if(n == 0) return 0;
        if(n < 0) return -1;
        
        if(dp[n]) return dp[n];
        
        int ans1 = solve(n-x, x, y, z, dp);
        int ans2 = solve(n-y, x, y, z, dp);
        int ans3 = solve(n-z, x, y, z, dp);
        dp[n] = 1 + max(max(ans1, ans2), ans3);
        return dp[n] = (dp[n] == 0)? -1: dp[n];
    }
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(n+1, 0);
        int ans = solve(n, x, y, z, dp);
        return ans == -1? 0: ans;
    }
    // int f(int n, int x, int y, int z,vector<int>&dp)
    // {
    //     if(n==0)
    //     {
    //         return 0;
    //     }
    //     if(n<0)
    //     {
    //         return -1;
    //     }
    //     if(dp[n]!=0)
    //     {
    //         return dp[n];
    //     }
        
    //     //int a=0;int b=0;int c=0;
    //     int a=f(n-x,x,y,z,dp);
    //     int b=f(n-y,x,y,z,dp);
    //     int c=f(n-z,x,y,z,dp);
      
    //     dp[n]=1+max(a,max(b,c));
    //     if(dp[n]==0)
    //     {
    //         return -1;
    //     }
    //     return dp[n];
        
    // }
    // int maximizeTheCuts(int n, int x, int y, int z)
    // {
    //     //Your code here
    //     vector<int>dp(n+1,0);
    //     int res = f(n,x,y,z,dp);
    //     if(res==-1)
    //     {
    //         return 0;
    //     }
    //     return res;
    // }
};

// { Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  // } Driver Code Ends