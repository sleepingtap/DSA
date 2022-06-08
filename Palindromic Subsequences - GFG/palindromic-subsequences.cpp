// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int MinRemove(int n, string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << MinRemove(n, s) << endl;
    }
return 0;
}// } Driver Code Ends

bool checkpal(string s,int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return false;
        }
    }
    return true;
}
int MinRemove(int n, string s)
{
    //complete the function here
    if(checkpal(s,n)==true)
    {
        return 1;
    }
    return 2;
}