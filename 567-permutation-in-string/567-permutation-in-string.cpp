class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        unordered_map<int,int>mp;
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<n;i++)
        {
            mp[s1[i]]++;
        }
        int i=0;int j=0;int c=mp.size();
        while(j<m)
        {
            if(mp.find(s2[j])!=mp.end())
            {
                mp[s2[j]]--;
                if(mp[s2[j]]==0)
                {
                    c--;
                }
            }
            if(j-i+1<n)
            { 
                j++;
            }
            else if(j-i+1==n)
            {
                if(c==0)
                {
                    return true;
                }
                if(mp.find(s2[i])!=mp.end())
                {
                    mp[s2[i]]++;
                    if(mp[s2[i]]==1)
                    {
                        c++;
                    }
                }
                
                i++;
                j++;
            }
        }
        return false;
    }
};