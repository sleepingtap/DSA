// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<char>s;
        string ans="";
        
        for(int i=S.size()-1;i>=0;i--)
        {
            if(S[i]!='.')
             {
                 s.push(S[i]);
             }
             else
             {
                while(!s.empty())
                {
                    char a=s.top();
                    s.pop();
                    ans+=a;
                }
                ans=ans+'.';
            }
        }
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='.')
            {
                ans+=S[i];
            }
            else
            {
                break;
            }
        }
        //reverse(ans.begin(),ans.end());
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends