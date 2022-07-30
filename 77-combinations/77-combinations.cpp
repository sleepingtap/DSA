class Solution {
public:
    void f(int index,int k,vector<int>&v,vector<vector<int>>&ans,vector<int>&levels)
    {
        if(index==v.size() && k==0)
        {
            ans.push_back(levels);
            return;
        }
        if(index==v.size() && k!=0)
        {
            return;
        }
        levels.push_back(v[index]);
        f(index+1,k-1,v,ans,levels);
        levels.pop_back();
        f(index+1,k,v,ans,levels);
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        vector<int>levels;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        f(0,k,v,ans,levels);
        return ans;
    }
};