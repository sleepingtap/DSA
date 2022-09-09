class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
//         int it_s;
//         for(int i=0;i<t.size();i++)
//         {
            
//         }
        // if(t.size()==1)
        // {
        //     if(s.size()==1)
        //     {
        //         if(s[0]==t[0])
        //             return true;
        //         return false;
        //     }  
        // }
        queue<char>q;
        char ch='#';
        int iterate_t=0;
        for(int i=0;i<s.size();i++)
        {
            q.push(s[i]);
        }
        while(iterate_t<t.size() && !q.empty())
        {
            if(ch=='#')
            {
                ch=q.front();
                // q.pop();
            }
            if(ch==t[iterate_t])
            {
                ch='#';
                q.pop();
            }
            iterate_t++;
        }
        if(q.empty())
        {
            return true;
        }
        return false;
    }
};