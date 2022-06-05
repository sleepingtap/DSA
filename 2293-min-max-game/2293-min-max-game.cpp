class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
        while(nums.size()!=1)
        {
            vector<int>v(nums.size()/2);
            for(int i=0;i<nums.size()/2;i++)
            {
                if(i%2==0)
                {
                    v[i]=(min(nums[2*i],nums[2*i+1]));
                }
                else
                {
                    v[i]=(max(nums[2*i],nums[2*i+1]));
                }
            }
            nums.clear();
            nums=v;
        }
        return nums[0];
    }
};