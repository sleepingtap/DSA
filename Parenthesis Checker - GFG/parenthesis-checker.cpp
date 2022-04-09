// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a,char b)
    {
        if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'))
        {
            return true;
        }
        return false;
    }
    bool ispar(string x)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                s.push(x[i]);
            }
            if(x[i]==')' || x[i]=='}' || x[i]==']')
            {
                if(s.empty())
                {
                    return false;
                }
                if(matching(s.top(),x[i])==false)
                {
                    return false;
                }
                s.pop();
            }
        }
        if(s.empty())
        {
            return true;
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends