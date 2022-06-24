// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>lis(n,1);
       int i=1;
       int j=0;
       while(i<n)
       {
           j=0;
           while(j<i)
           {
               if(a[i]>a[j] && lis[i]<=lis[j])
               {
                   lis[i]=1+lis[j];
               }
               j++;
           }
           i++;
       }
       int ans=lis[0];
       for(int i=1;i<n;i++)
       {
           ans=max(ans,lis[i]);
       }
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