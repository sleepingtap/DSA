class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        unordered_map<string,int>mp;
        int i=0;int j=0;
        int n=s.size();
        
        while(i<=n-k)
        {
            string a="";
            while(j-i+1<=k)
            {
                a+=s[j];
                j++;
            }
            mp[a]++;
            j=i+1;
            i++;
        }
        if(mp.size()>=pow(2,k))
        {
            return true;
        }
        return false;
    }
};