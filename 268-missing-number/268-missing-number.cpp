class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n =nums.size();
        int total=n*(n+1)/2;
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        return total-s;
        
        
        
        // int n=nums.size();
        // vector<int>temp(n+1,-1);
        // for(int i=0;i<n;i++)
        // {
        //     temp[nums[i]]=1;
        // }
        // for(int i=0;i<temp.size();i++)
        // {
        //     if(temp[i]==-1)
        //     {
        //         return i;
        //     }
        // }
        // return 0;
    }
};