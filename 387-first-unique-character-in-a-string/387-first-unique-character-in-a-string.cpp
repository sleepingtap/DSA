class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        char ch; 
        for(auto i:mp)
        {
            if(i.second!=1)
            {
                 mp.erase(i.first);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};