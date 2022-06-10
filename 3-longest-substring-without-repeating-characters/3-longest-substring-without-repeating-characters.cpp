class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int>mp;
        int res=0;
        int i=0,j=0;
        int n=s.size();
        while(j<n)
        {
            mp[s[j]]++;
            // if(mp.size()>j-i+1)
            // {
            //     j++;
            // }

            if(mp.size()==j-i+1)
            {
                res=max(res,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};