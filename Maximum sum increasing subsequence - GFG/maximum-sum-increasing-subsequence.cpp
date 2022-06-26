// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int>mis(n);
	    for(int i=0;i<n;i++)
	    {
	        mis[i]=arr[i];
	    }
	    int j=0;int i=1;
	    while(i<n)
	    {
	        j=0;
	        while(j<i)
	        {
	            if(arr[i]>arr[j] && mis[i]<arr[i]+mis[j])
	            {
	                mis[i]=arr[i]+mis[j];
	            }
	            j++;
	        }
	        i++;
	    }
	    int ans=mis[0];
	    for(int i=1;i<n;i++)
	    {
	        ans=max(ans,mis[i]);
	    }
	    return ans;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends