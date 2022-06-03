// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long fact(int n)
    {
        long long int f=1;
        for(int i=1;i<=n;i++)
        {
            f*=i;
        }
        return f;
    }
    long long possibleStrings(int n, int r, int b, int g) 
    {
        // code here
        int P=n-(r+b+g);
        long long ans=0;
        for(int i=0;i<=P;i++)
        {
            for(int j=0;j<=P;j++)
            {
                int k=P-i-j;
                if(k>=0)
                {
                    int A=r+i;
                    int B=b+j;
                    int C=g+k;
                    ans+=fact(n)/(fact(A)*fact(B)*fact(C));
                }
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // vector<long long int>v;
        // int A=r;
        // int B=b;
        // int C=g;
        // long long int x=0;
        // if(r+b+g==n)
        // {
        //     x=(long long)fact(n)/(fact(r)*fact(b)*fact(g));
        //     v.push_back(x);
        // }
        // else
        // {
        //     while(true)
        //     {
        //         g++;
        //         if(r+b+g>n)
        //         {
        //             break;
        //         }
        //         if(r+b+g==n)
        //         {
        //             x=(long long)fact(n)/(fact(r)*fact(b)*fact(g));
        //             v.push_back(x);
        //         }
        //     }
        //     g=C;
        //     while(true)
        //     {
        //         b++;
        //         if(r+b+g>n)
        //         {
        //             break;
        //         }
        //         if(r+b+g==n)
        //         {
        //             x=(long long)fact(n)/(fact(r)*fact(b)*fact(g));
        //             v.push_back(x);
        //         }
        //     }
        //     b=B;
        //     while(true)
        //     {
        //         r++;
        //         if(r+b+g>n)
        //         {
        //             break;
        //         }
        //         if(r+b+g==n)
        //         {
        //             x=(long long)fact(n)/(fact(r)*fact(b)*fact(g));
        //             v.push_back(x);
        //         }
        //     }
        // }
        // long long int s=0;
        // for(int i=0;i<v.size();i++)
        // {
        //     s+=v[i];
        // }
        // return s;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        Solution ob;
        cout << ob.possibleStrings(n, r, b, g) << endl;
    }
    return 0;
}
  // } Driver Code Ends