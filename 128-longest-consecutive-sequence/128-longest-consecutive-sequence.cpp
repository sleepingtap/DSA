class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.empty())
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=1;int ans=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            else if(nums[i]==nums[i-1]+1)
            {
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=1;
            }
        }
        return max(ans,c);
    }
};