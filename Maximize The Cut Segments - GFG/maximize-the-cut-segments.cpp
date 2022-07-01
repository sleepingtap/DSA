// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int f(int n, int x, int y, int z,vector<int>&dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(n<0)
        {
            return -1;
        }
        if(dp[n]!=0)
        {
            return dp[n];
        }
        
        //int a=0;int b=0;int c=0;
        int a=1+f(n-x,x,y,z,dp);
        int b=1+f(n-y,x,y,z,dp);
        int c=1+f(n-z,x,y,z,dp);
      
        dp[n]=max(a,max(b,c));
        if(dp[n]==0)
        {
            return dp[n]=-1;
        }
        else
        {
            return dp[n];
        }
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(n+1,0);
        int res = f(n,x,y,z,dp);
        if(res==-1)
        {
            return 0;
        }
        return res;
    }
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