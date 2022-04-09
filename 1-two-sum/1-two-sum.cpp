class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>v;
        map<int,int>mp;
        int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     mp[nums[i]] = i;
        // }
        for(int i=0;i<n;i++)
        {
            int ans=target-nums[i];
            if(mp.find(ans)!=mp.end())
            {
                v.push_back(i);
                v.push_back(mp.find(ans)->second);
                // v.push_back();
                break;
               // v.push_back(ans.second);
            }
            else
            {
                 mp[nums[i]] = i;
            }
        }
        return v;
        
        
        
        
        
        
        
        
        
        
        // vector<int>v;
        // int n=nums.size();int i=0;
        // while(i<n)
        // {
        //     int j=1;
        //     if(target-nums[i]==nums[j])
        //     {
        //         v.push_back(i);
        //         v.push_back(j);
    //             break;
    //         }
    //         else if(j<n)
    //         {
    //             j++;
    //         }
    //         else{
    //         i++;}
    //     }
    //     return v;
     }
};