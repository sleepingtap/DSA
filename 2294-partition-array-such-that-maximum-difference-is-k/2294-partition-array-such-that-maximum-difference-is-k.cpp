class Solution {
public:
    int partitionArray(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int i=1;int j=0;int c=1;
        while(i<nums.size())
        {
            if(nums[i]-nums[j]>k)
            {
                j=i;
                c++;
            }
            i++;
        }
        return c;
    }
};