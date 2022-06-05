class Solution {
public:

    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) 
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<op.size();i++)
        {
            int k=0;
            if(mp.find(op[i][0])!=mp.end())
            {
                k=mp[op[i][0]];
                mp.erase(op[i][0]);
                mp[op[i][1]]=k;
            }
        }
        vector<int>v(mp.size(),0);
        for(auto i:mp)
        {
            v[i.second]=i.first;
            mp.erase(i.first);
        }
        return v;
    }
};