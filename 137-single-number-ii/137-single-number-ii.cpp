class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;int k=0;
        while(i<nums.size())
        {
            //cout<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<endl;
            if(i+1<n && nums[i]==nums[i+1])
            {
                if(i+2<n && nums[i]==nums[i+2])
                {
                     i=i+2;
                }
            }
            else
            {
                k=nums[i];
                break;
            }
            i++;
        }
        return k;
    }
};