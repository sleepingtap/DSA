// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<N;i++)
        {
            s+=arr[i];
        }
        if(s%2!=0)
        {
            return 0;
        }
        else
        {
            int k=s/2;
            vector<vector<int>>dp(N+1,vector<int>(k+1));
            for(int i=0;i<=N;i++)
            {
                for(int j=0;j<=k;j++)
                {
                    if(i==0)
                    {
                        dp[i][j]=0;
                    }
                    if(j==0)
                    {
                        dp[i][j]=1;
                    }
                }
            }
            for(int i=1;i<=N;i++)
            {
                for(int j=1;j<=k;j++)
                {
                    if(j>=arr[i-1])
                    {
                        dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            return dp[N][k];
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends