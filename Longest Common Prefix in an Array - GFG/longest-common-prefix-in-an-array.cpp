// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ss = arr[0];
        //string ans="";
        for(int i=1;i<N;i++)
        {
            if(arr[i].size()<arr[i-1].size())
            {
                ss=arr[i];
            }
        }
        int size=ss.size();
        //cout <<size;
        
        for(int i=0;i<size;i++)
        {
           
            //=ss.size();
            // if(size==0)
            // {
            //     return "-1";
            // }
            for(int j=0;j<N;j++)
            
            {
                 string w=arr[j];
                
                if(ss[i]!=w[i])
                {
                  if(i==0)
                  {
                      return "-1";
                      // break;
                  }
                  return ss.substr(0,i);}
                

            }
        }
        return ss;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends