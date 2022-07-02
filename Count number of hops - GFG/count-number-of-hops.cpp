// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long f(int n,vector<long long> &dp)
    {
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n]%1000000007;
        }
        if(n==1 || n==0)
        {
            return 1;
        }
        long long int a=f(n-1,dp)%1000000007;
        long long int b=f(n-2,dp)%1000000007;
        long long int c=f(n-3,dp)%1000000007;
        return dp[n]=(a+b+c)%1000000007;
    }
    long long countWays(int n)
    {
        
        // your code here
        vector<long long>dp(n+1,-1);
        return f(n,dp)%1000000007;
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends