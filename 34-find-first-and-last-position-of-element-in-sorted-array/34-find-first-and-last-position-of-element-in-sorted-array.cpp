class Solution {
public:
    int first(vector<int>& nums, int target)
    {
        int l=0;
        int h=nums.size()-1;
        int n=nums.size()-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(nums[m]==target)
            {
                if(m==0)
                {
                    return m;
                }
                else if(m-1>=0 && nums[m-1]!=nums[m])
                {
                    return m;
                }
                else if(m-1>=0 && nums[m-1]==nums[m])
                {
                    h=m-1;
                }
            }
            else if(nums[m]<target)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return -1;
    }
    int last(vector<int>& nums, int target)
    {
        int l=0;
        int h=nums.size()-1;
        int n=nums.size()-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(nums[m]==target)
            {
                if(m==n)
                {
                    return m;
                }
                else if(m+1<=n && nums[m+1]!=nums[m])
                {
                    return m;
                }
                else if(m+1<=n && nums[m+1]==nums[m])
                {
                    l=m+1;
                }
            }
            else if(nums[m]<target)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>v(2);
        v[0]=first(nums,target);
        v[1]=last(nums,target);
        return v;
    }
};