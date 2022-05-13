class Solution {
public:
    void sub2(int index,vector<int>& nums,vector<int> &res,vector<vector<int>> &ans)
    {
        ans.push_back(res);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1])
                continue;
            res.push_back(nums[i]);
            sub2(i+1,nums,res,ans);
            res.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        sub2(0,nums,res,ans);
        return ans;
    }
};