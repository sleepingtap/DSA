class Solution {
public:
    void part(int index,vector<string>&res,vector<vector<string>>&ans,string s)
    {
        if(index==s.size())
        {
            ans.push_back(res);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispal(s,index,i)==true)
            {
                res.push_back(s.substr(index,i-index+1));
                part(i+1,res,ans,s);
                res.pop_back();
            }
        }
    }
    bool ispal(string s,int index,int i)
    {
        while(index<=i)
        {
            if(s[index]!=s[i])
            {
                return false;
            }
            index++;
            i--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>>ans;
        vector<string>res;
        part(0,res,ans,s);
        return ans;
    }
};