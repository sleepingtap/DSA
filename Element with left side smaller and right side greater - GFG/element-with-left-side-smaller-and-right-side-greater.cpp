// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) 
{
    int l[n];
    int r[n];
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        l[i]=maxi;
    }
    int mini=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        mini=min(mini,arr[i]);
        r[i]=mini;
    }
    for(int i=1;i<n;i++)
    {
        if(l[i]==r[i])
        {
            return l[i];
        }
    }
    return -1;
    // vector<int>v(n);
    // v[0]=arr[0];
    // v[n-1]=arr[n-1];
    // v[n-2]=arr[n-2];
    // //v[n-3]=arr[n-2];
    // int maxi=v[n-2];
    // for(int i=n-3;i>0;i--)
    // {
    //     v[i]=max(v[i+1],arr[i]);
    //   // cout<<v[i]<<" ";
    // }
    // int k=v[1];
    // for(int i=2;i<n-1;i++)
    // {
    //     if(k!=arr[i])
    //     {
    //         return -1;
    //     }
    // }
    // return k;
}