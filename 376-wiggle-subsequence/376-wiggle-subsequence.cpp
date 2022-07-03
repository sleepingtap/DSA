class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int n=nums.size();
        int a=1;int b=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i])
            {
                a=b+1;
            }
            else if(nums[i]<nums[i-1])
            {
                b=a+1;
            }
        }
        return max(a,b);
    }
};