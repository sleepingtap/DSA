// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// Documenting: for required ouput, we need to make "ans" like in vector of vectors.
// and we are creating vector v and taking locally as we only need paris of buy & sell.
// Now, we are getting profit when we sell at a price of more than buying price.Like,
// (0 3) and (4 6) and that's why we are storing starting and ending index.If vector 
// v is not empty then we are storing all pairs in ans.



class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    
    
    vector<vector<int>>stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>ans;
        
        for(int i=0;i<n-1;i++)
        {
            vector<int>v;
            
            if(A[i]<A[i+1])
            {
                v.push_back(i);
                v.push_back(i+1);
            }
            if(!v.empty())
           {
              ans.push_back(v);
           }
        }
       
        
        return ans;
        
    }
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends