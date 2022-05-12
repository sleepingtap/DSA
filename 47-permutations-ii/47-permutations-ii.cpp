class Solution {
public:
    //    void recursion(vector<int> num, int i, int j, vector<vector<int> > &res) {
    //     if (i == j-1) {
    //         res.push_back(num);
    //         return;
    //     }
    //     for (int k = i; k < j; k++) {
    //         if (i != k && num[i] == num[k]) continue;
    //         swap(num[i], num[k]);
    //         recursion(num, i+1, j, res);
    //     }
    // }
    // vector<vector<int> > permuteUnique(vector<int> &num) {
    //     sort(num.begin(), num.end());
    //     vector<vector<int> >res;
    //     recursion(num, 0, num.size(), res);
    //     return res;
    // }
    void per(int index,vector<int>nums,vector<vector<int>> &ans)
    {
        if(index==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            if((index!=i && nums[i]==nums[index]))//||(i+1<nums.size() && nums[i]==nums[i+1])
                continue;
            swap(nums[i],nums[index]);
            per(index+1,nums,ans);     
            //swap(nums[i],nums[index]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    { 
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        per(0,nums,ans);
        return ans;
    }
};