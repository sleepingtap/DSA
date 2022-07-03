// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long solve(int i,int j,int arr[], int n,vector<vector<long long>>&dp)
    {
        if(i==j)
        {
            return arr[i];
        }
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        long long int l=arr[i]+min(solve(i+1,j-1,arr,n,dp),solve(i+2,j,arr,n,dp));
        long long int r=arr[j]+min(solve(i+1,j-1,arr,n,dp),solve(i,j-2,arr,n,dp));
        return dp[i][j]=max(l,r);
    }
    long long maximumAmount(int arr[], int n)
    {
        // Your code here
        vector<vector<long long>>dp(n+1,vector<long long>(n+1,-1));
        return solve(0,n-1,arr,n,dp);
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends