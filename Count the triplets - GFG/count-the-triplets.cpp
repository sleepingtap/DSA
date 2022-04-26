// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
// 	bool ispresent(int a[],int n,int x)
// 	{
// 	    int l=0,h=n-1;
// 	    while(l<=h)
// 	    {
// 	        int m=l+(h-l)/2;
// 	        if(a[m]==x)
// 	        {
// 	            return true;
// 	        }
// 	        else if(a[m]<x)
// 	        {
// 	            l=m+1;
// 	        }
// 	        else
// 	        {
// 	            h=m-1;
// 	        }
// 	    }
// 	    return false;
// 	}
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]=i;
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        int sum=0;
	        for(int j=i+1;j<n;j++)
	        {
	            sum=(arr[i]+arr[j]);
	            if(mp.find(sum)!=mp.end())
	            {
	                //if(mp[sum]>j)
	                    c++;
	                //mp.erase(sum);
	            }
	        }
	    }
	    return c;
	    
	    
	    
	    
	    
	   // int i=0;
	   // int j=1;
	   // int sum=0;int c=0;
	   // sort(arr,arr+n);
	   // while(i<n && j<n)
	   // {
	   //    sum=arr[i]+arr[j];
	   //    if(ispresent(arr,n,sum)==true)
	   //    {
	   //         c++;
	   //    }

	   //     j++;
	   //     if(j>=n)
	   //     {
	   //         i++;
	   //         j=i+1;
	   //     }
	   // }
	   // return c;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends