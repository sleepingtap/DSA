class Solution {
public:
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
    int removePalindromeSub(string s) 
    {
        int n=s.size();
        if(checkpal(s,n)==true)
        {
            return 1;
        }
        return 2;
        
    }
};