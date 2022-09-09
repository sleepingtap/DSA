class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
            {
                j++;
                if(j==s.size())
                {
                    break;
                }
            }
            
        }
        if(j!=s.size())
        {
            return false;
        }
        return true;
    }
        // queue<char>q;
        // char ch='#';
        // int iterate_t=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     q.push(s[i]);
        // }
        // while(iterate_t<t.size() && !q.empty())
        // {
        //     if(ch=='#')
        //     {
        //         ch=q.front();
        //     }
        //     if(ch==t[iterate_t])
        //     {
        //         ch='#';
        //         q.pop();
        //     }
        //     iterate_t++;
        // }
        // if(q.empty())
        // {
        //     return true;
        // }
        // return false;
    
};