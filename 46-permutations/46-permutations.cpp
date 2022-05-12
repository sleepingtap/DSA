class Solution {
public:
    void per(int freq[],vector<int>& nums,vector<int>&res,vector<vector<int>> &ans)
    {
        if(res.size()==nums.size())
        {
            ans.push_back(res);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                res.push_back(nums[i]);
                freq[i]=1;
                per(freq,nums,res,ans);
                res.pop_back();
                freq[i]=0;
            }
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>res;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i]=0;
        }
        per(freq,nums,res,ans);
        return ans;
    }
};