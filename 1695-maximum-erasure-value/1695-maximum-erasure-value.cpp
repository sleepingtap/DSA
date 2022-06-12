class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int i=0;int j=0;
        unordered_map<int,int>mp;
        int n=nums.size();long long int score=0;long long int sum=0;
        while(j<n)
        {
            if(mp.find(nums[j])==mp.end())
            {
                mp[nums[j]]++;
                sum+=nums[j];
                j++;
            }
            else
            {
                sum-=nums[i]; 
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(nums[i]);
                }
                i++;
            }
            score=max(score,sum); 
        }
        return score;
    }
};