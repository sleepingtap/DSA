class Solution {
public:
    int minDeletions(string s) 
    {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]!=0 && v[j]!=0 && v[i]==v[j] )
                {
                    c++;
                    v[j]=v[j]-1;
                }
            }
            
        }
        return c;
    }
};