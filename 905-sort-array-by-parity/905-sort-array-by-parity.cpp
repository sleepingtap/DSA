class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        //vector<int>res;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
        
        //working code
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2==0)
        //     {
        //         res.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2!=0)
        //     {
        //         res.push_back(nums[i]);
        //     }
        // }
        // return res;
    }
};