class Solution {
public:
    int f(int i,int t, vector<int> & coins,vector<vector<int>> & dp)
    {
        if(i==0){
            
            if(t%coins[0]==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(dp[i][t]!=-1)
            return dp[i][t];
        int pick=0;
        if(coins[i]<=t){
            pick=f(i,t-coins[i], coins,dp);
            
        }
        int np=f(i-1,t, coins,dp);
        return dp[i][t]=np+ pick;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
       return  f(coins.size()-1,amount,coins,dp);
    }
};