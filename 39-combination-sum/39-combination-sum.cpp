class Solution {
public:
    void find(int index,int target,vector<int>& arr,vector<int> &res,vector<vector<int>> &ans)
    {
        if(index==arr.size())
        {
            if(target==0)
            {
                ans.push_back(res);
            }
            return;
        }
        if(arr[index]<=target)
        {
            res.push_back(arr[index]);
            find(index,target-arr[index],arr,res,ans);
            res.pop_back();
        }
        find(index+1,target,arr,res,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) 
    {
        vector<vector<int>>ans;
        vector<int>res;
        find(0,target,arr,res,ans);
        return ans;
    }
};