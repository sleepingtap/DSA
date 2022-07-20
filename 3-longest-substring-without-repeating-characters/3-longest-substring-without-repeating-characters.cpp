class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int>mp;
        int c=0;
        int ans=0;
        int n=s.size();
        int i=0;int j=0;
        while(i<n && j<n)
        {
            if(mp.find(s[j])==mp.end())
            {
                mp[s[j]]++;
                j++;
                c++;
            }
            else
            {
              mp[s[j]]++;
              c++;
              while(mp[s[j]]!=1)
              {
                  mp[s[i]]--;
                  c--;
                  if(mp[s[i]]==0)
                  {
                      mp.erase(s[i]);
                  }
                  i++;
              }
              j++;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};