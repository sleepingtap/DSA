class Solution {
public:
    void per(int index,vector<int> nums,vector<vector<int>> &ans)
    {
        if(index==nums.size())
        {
              ans.push_back(nums);
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            per(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }    
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        per(0,nums,ans);
        return ans;
    }
};