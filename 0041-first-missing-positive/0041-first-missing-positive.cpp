class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                c=i;
                break;
            }
        }
        if(nums[c]!=1)
        {
            return 1;
        }
        for(int i=c+1;i<n;i++)
        {
            if(nums[i]-nums[i-1]!=1 && nums[i-1]-nums[i]!=0)
            {
                return nums[i-1]+1;
            }
        }
        return nums[n-1]+1; 
    }
};