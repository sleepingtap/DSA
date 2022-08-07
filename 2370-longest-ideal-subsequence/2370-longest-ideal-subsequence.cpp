class Solution {
public:
    int f(int index,string &s,int n,int &k,int prev,vector<vector<int>>&dp)
    {
        if(index==n)
        {
            return 0;
        }
        if(dp[index][prev]!=-1)
        {
            return dp[index][prev];
        }
        int l=0;
        if(prev==0 || abs(prev-s[index])<=k)
        {
            l=1+f(index+1,s,n,k,s[index],dp);
        }
        int r=f(index+1,s,n,k,prev,dp);
        return dp[index][prev]=max(l,r);
    }
    int longestIdealString(string s, int k) 
    {
        vector<vector<int>>dp(s.size()+1,vector<int>(123,-1));
        int prev=0;
        return f(0,s,s.size(),k,prev,dp);
    }
};