class Solution {
public:
    bool checkpossible(string a,string b)
    {
        if(a.size()!=b.size()+1)
            return false;
        int i=0;
        int j=0;
        while(i<a.size())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i==a.size() &&  j==b.size())
            return true;
        return false;
    }
    static bool comp(string &s1,string &s2)
    {
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) 
    {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(checkpossible(words[i],words[j])==true && 1+dp[j]>dp[i])
                {
                    dp[i]=dp[j]+1;
                }
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};