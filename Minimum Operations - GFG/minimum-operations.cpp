// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    // int f(int i,int n,int c)
    // {
    //     if(i>n)
    //     {
    //         return n;
    //     }
    //     if(i==n)
    //     {
    //         return c;
    //     }
    //     int a=f(i+1,n,c+1);
    //     int b=f(i*2,n,c+1);
    //     return min(a,b);
    // }
    int minOperation(int n)
    {
        //code here.
        int c=0;
        while(n!=0)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n--;
            }
            c++;
        }
        return c;
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
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends