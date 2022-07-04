class Solution {
public:
    int candy(vector<int>& rat) 
    {
        int n=rat.size();
        vector<int>l(n,1);
        vector<int>r(n,1);
        for(int i=1;i<n;i++)
        {
            if(rat[i]>rat[i-1])
            {
                l[i]=1+l[i-1];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(rat[i]>rat[i+1])
            {
                r[i]=1+r[i+1];
            }
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=max(l[i],r[i]);   
        }
        return s;
    }
};