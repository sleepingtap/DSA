class Solution {
public:
    void f(int index,vector<int> nums,vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            f(index+1,nums,ans);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        f(0,nums,ans);
        return ans;
    }
};