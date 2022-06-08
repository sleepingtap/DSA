class Solution {
public:
    bool isPalindrome(string s) 
    {
       // int b=s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string a="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z' )||( s[i]>='0' && s[i]<='9'))
            {
                a+=s[i];
            }
        }
        int n=a.size();
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};