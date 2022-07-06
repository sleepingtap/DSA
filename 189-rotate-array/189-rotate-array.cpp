class Solution {
public:
    void rotate(vector<int>&nums,int i,int j)
    {
        while(i<=j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    {
        k=k%nums.size();
        rotate(nums,0,nums.size()-1);
        rotate(nums,0,k-1);
        rotate(nums,k,nums.size()-1);
        
    }
};