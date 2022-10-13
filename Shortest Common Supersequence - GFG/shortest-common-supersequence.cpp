//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int f(int i,int j,string X, string Y, int m, int n,vector<vector<int>>&dp)
    {
        if(i==m || j==n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int l=0;int r=0;
        if(X[i]==Y[j])
        {
            l=1+f(i+1,j+1,X,Y,m,n,dp);
        }
        else
        {
            r=max(f(i,j+1,X,Y,m,n,dp),f(i+1,j,X,Y,m,n,dp));
        }
        return dp[i][j]=max(l,r);
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=f(0,0,X,Y,m,n,dp);
        return m+n-ans;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends