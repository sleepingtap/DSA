// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) 
    {
        // code here
        int sum=0;int max=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]=='I')
            {
                if(max>1)
                {
                    sum=abs(sum-1);
                }
                else
                {
                    sum+=1;
                    max=1;
                }
            }
            else if(str[i]=='V')
            {
                if(max>5)
                {
                    sum=abs(sum-5);
                }
                else
                {
                    sum+=5;
                    max=5;
                }
            }
            else if(str[i]=='X')
            {
                if(max>10)
                {
                    sum=abs(sum-10);
                }
                else
                {
                    sum+=10;
                    max=10;
                }
            }
            else if(str[i]=='L')
            {
                if(max>50)
                {
                    sum=abs(sum-50);
                }
                else
                {
                    sum+=50;
                    max=50;
                }
            }
            else if(str[i]=='C')
            {
                if(max>100)
                {
                    sum=abs(sum-100);
                }
                else
                {
                    sum+=100;
                    max=100;
                }
            }
            else if(str[i]=='D')
            {
                if(max>500)
                {
                    sum=abs(sum-500);
                }
                else
                {
                    sum+=500;
                    max=500;
                }
            }
            else if(str[i]=='M')
            {
                if(max>1000)
                {
                    sum=abs(sum-1000);
                }
                else
                {
                    sum+=1000;
                    max=1000;
                }
            }
            
        }
        return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends