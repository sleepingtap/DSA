// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here

        int l=0;
        int h=n-1;
        long long s1=a[l];
        long long s2=a[h];
        if(n==1)
        {
            return 1;
        }
        while(l<h)
        {
            if(s1==s2)
            {
                if(l+2==h)
                    return l+2;
            }
            if(s2>s1)
            {
                l++;
                s1+=a[l];
            }
            else
            {
                h--;
                s2+=a[h];
            }
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends