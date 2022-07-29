class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        int n=words.size();
        int p=pattern.size();
        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            int m=s.size();
            int f=0;int f1=0;
            if(m!=p)
            {
                continue;
            }
            for(int j=0;j<p;j++)
            {
                if(mp.find(s[j])==mp.end())
                {
                    mp[s[j]]=pattern[j];
                }
                else
                {
                    if(mp[s[j]]!=pattern[j])
                    {
                        f=1;
                    }
                }
            }
            mp.clear();
            for(int j=0;j<p;j++)
            {
                if(mp1.find(pattern[j])==mp1.end())
                {
                    mp1[pattern[j]]=s[j];
                }
                else
                {
                    if(mp1[pattern[j]]!=s[j])
                    {
                        f=1;
                    }
                }
            }
            mp1.clear();
            if(f==0 && f1==0)
            {
                ans.push_back(s);
            }
            
        }
        return ans;
    }
};