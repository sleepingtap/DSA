class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        int ans=0;int maxi=0;
        unordered_map<int,pair<pair<int,int>,int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                mp[nums[i]].second++;
                mp[nums[i]].first.second=i;
            }
            else
            {
                mp[nums[i]].first.first=i;
                mp[nums[i]].second++;
                mp[nums[i]].first.second=i;
            }
            maxi=max(maxi, mp[nums[i]].second);  
        }
        // for(auto it:mp)
        // {
        //     cout<<it.first<<" "<< it.second.first.first<<" "<<it.second.first.second<<" "<<it.second.second<<endl;
        // }
        int c=0;int cmp=n;
        for(auto it:mp)
        {
            if(it.second.second==maxi)
            {
                if(abs(it.second.first.first-it.second.first.second)<cmp)
                {
                    cmp=abs(it.second.first.first-it.second.first.second);
                }
                // c=it.second.second;
            }
            
        }
        ans=cmp;
        return ans+1; 
    }
};