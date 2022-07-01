// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
        //Your code here
        for(int i=0;i<str.size();i++)
        {
            
            if(str[0]=='-')
            {
                if(str[i]>='a' && str[i]<='z' || (i>=1 &&  str[i]=='-') || (i>=1 &&  str[i]=='+')  )
                {
                    return -1;
                }
            }
            else
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    return -1;
                }
            }
        }
        int a=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='-' || str[i]=='+')
            {
                continue;
            }
            else
            {
                a=((str[i]-'0')+a*10);
            }
        }
        if(str[0]=='-')
        {
            return (-a);
        }
        return a;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends