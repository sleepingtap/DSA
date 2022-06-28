// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int f(int ind,int n,int S[],vector<vector<long long int>>&dp)
    {
        if(ind==0)
        {
            if(n%S[ind]==0)
            {
                return 1;
            }
            return 0;
        }
        if(dp[ind][n]!=-1)
        {
            return dp[ind][n];
        }
        long long int nottake=f(ind-1,n,S,dp);
        long long int take=0;
        if(S[ind]<=n)
        {
            take=f(ind,n-S[ind],S,dp);
        }
        return dp[ind][n]=take+nottake;
    }
    long long int count(int S[], int m, int n) 
    {
        // code here.
        vector<vector<long long int>>dp(m+1,vector<long long int>(n+1,-1));
        return f(m-1,n,S,dp);
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends