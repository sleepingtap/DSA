class Solution {
public:
    bool isPossible(vector<int>& nums) 
    {
      //  priority_queue <int, vector<int>, greater<int> > pq;
        map<int,int>mp,mp1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:nums)
        {
            if(mp[i]==0)
            {
                continue;
            }
            mp[i]--;
            if(mp1[i-1]>0)
            {
                mp1[i-1]--;
                mp1[i]++;
            }
            else if(mp[i+1]!=0 && mp[i+2]!=0)
            {
                mp[i+1]--;
                mp[i+2]--;
                mp1[i+2]++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};