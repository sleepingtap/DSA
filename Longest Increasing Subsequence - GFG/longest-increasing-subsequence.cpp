// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
     int f(int index,int prev, int a[],vector<vector<int>>&dp,int n)
    {
        // int n=a.size();
        if(index==n)
        {
            return 0;
        }
        if(dp[index][prev+1]!=-1)
        {
            return dp[index][prev+1];
        }
        int len=0+f(index+1,prev,a,dp,n);
        if(prev==-1 || a[index]>a[prev])
        {
            len=max(len,1+f(index+1,index,a,dp,n));
        }
        return dp[index][prev+1]=len;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
       int ans=f(0,-1,a,dp,n);
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends