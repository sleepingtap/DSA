class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        vector<int>v;
        v=nums;
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
            if(nums[i]==1)
            {
                k++;
            }
        }
        if(k==0)
        {
            return 0;
        }
        int i=0;
        int j=0;
        int ans=0;
        int mini=INT_MAX;
    
        while(j<v.size())
        {
            if(v[j]==0)
            {
                ans++;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                mini=min(mini,ans);
                if(v[i]==0)
                {
                    ans--;
                }
                i++;
                j++;
            }
        }
        return mini;
    }
};