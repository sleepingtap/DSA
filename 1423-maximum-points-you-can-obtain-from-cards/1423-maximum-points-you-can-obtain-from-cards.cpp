class Solution {
public:
    int maxScore(vector<int>& cs, int k) 
    {
        int sum=0;int ans=0;
       
        int n=cs.size();
       
        for(int i=0;i<k;i++)
        {
            sum+=cs[i];
        }
        ans=sum;
        for(int i=k-1;i>=0;i--)
        {
            sum-=cs[i];
            sum+=cs[n-k+i];
            ans=max(ans,sum);
        }
        return ans;  
    }
};