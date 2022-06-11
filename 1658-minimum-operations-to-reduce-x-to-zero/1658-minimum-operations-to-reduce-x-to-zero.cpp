class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        if(s==x)return n;
        int k=s-x;
        int i=0;int j=0;int ans=0;int a=0;
        while(j<n)
        {
            a+=nums[j];
            
            while(i<j && a>k)
            {
                a-=nums[i];
                i++;
            }
            if(a==k)
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        if(ans==0)
            return -1;
        return n-ans;
        
        
        // int n=nums.size();
        // int i=0;int j=n-1;int c=0;
        // while(i<=j)
        // {
        //     if(x==0)
        //     {
        //         return c;
        //         break;
        //     }
        //     if(nums[i]>x && nums[j]>x)
        //     {
        //         return 0;
        //     }
        //     if(nums[i]<nums[j])
        //     {
        //         if(x>=nums[j])
        //         { 
        //             x=x-nums[j];
        //             c++;
        //             j--;
        //         }
        //         else if(x>=nums[i])
        //         {
        //             x=x-nums[i];
        //             c++;
        //             i++;
        //         }
        //     }
        //     if(nums[i]>nums[j])
        //     {
        //         if(x>=nums[i])
        //         {
        //             x=x-nums[i];
        //             c++;
        //             i++;
        //         }
        //         else if(x>=nums[j])
        //         {
        //             x=x-nums[j];
        //             c++;
        //             j--;
        //         }
        //     }
        // }
        // return -1;
    }
};