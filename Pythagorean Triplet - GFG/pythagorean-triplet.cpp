// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) 
	{
	    // code here
	    unordered_map<int,int>mp;int f=0;
	    for(int i=0;i<n;i++)
	    {
	        int c=pow(arr[i],2);
	        mp[c]++;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(mp.find(pow(arr[i],2)+pow(arr[j],2))==mp.end())
	            {
	                f=0;
	            }
	            else
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends