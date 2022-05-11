class Solution {
public:
    void findcomb2(int index,int target,vector<int>& arr,vector<int> &res,vector<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.push_back(res);
            return;
        }
        for(int i=index;i<arr.size();i++)
        {
            if(i>index && arr[i]==arr[i-1])
            {
                continue;
            }
            if(arr[i]>target)
            {
                break;
            }
            res.push_back(arr[i]);
            findcomb2(i+1,target-arr[i],arr,res,ans);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) 
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>res;
        findcomb2(0,target,arr,res,ans);
        return ans;
    }
};