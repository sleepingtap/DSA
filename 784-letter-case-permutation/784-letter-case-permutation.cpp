class Solution {
public:
    void f(int index,string &s,vector<string>&ans)
    {
        if(index==s.size())
        {
            ans.push_back(s);
            return;
        }
        
        if(isalpha(s[index]))
        {
            
            if(isupper(s[index]))
            {
                s[index]=toupper(s[index]);
                f(index+1,s,ans);
                s[index]=tolower(s[index]);
            }
            else
            {
                s[index]=tolower(s[index]);
                f(index+1,s,ans);
                s[index]=toupper(s[index]);
            }  
            
        }
        f(index+1,s,ans);
        
    }
    vector<string> letterCasePermutation(string s) 
    {
        vector<string>ans;
        f(0,s,ans);
        return ans;
    }
};