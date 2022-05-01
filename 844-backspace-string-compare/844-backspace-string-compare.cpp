class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<int>s1;
        string a="";
        string b="";
        int n=s.length();
        int m=t.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#')
            {
                if(!s1.empty())
                  s1.pop();
            }
            else
            {
                s1.push(s[i]);
            }
        }
        while(!s1.empty())
        {
            int x=s1.top();
            s1.pop();
            a+=x;
        }
        for(int i=0;i<m;i++)
        {
            if(t[i]=='#')
            {
                if(!s1.empty())
                  s1.pop();
            }
            else
            {
                s1.push(t[i]);
            }
        }
        while(!s1.empty())
        {
            int x=s1.top();
            s1.pop();
            b+=x;
        }
        if(a==b)
        {
            return true;
        }
        return false;
    }
};