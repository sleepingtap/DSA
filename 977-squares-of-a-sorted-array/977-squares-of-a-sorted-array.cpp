class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;int j=n-1;
        vector<int>temp(n);
        int k=n-1;
        while(i<=j)
        {
            if(abs(nums[i])<abs(nums[j]))
            {
                temp[k]=pow(nums[j],2);
                j--;
            }
            else
            {
                temp[k]=pow(nums[i],2);
                i++;
            }
            k--;
        }
        return temp;
    }
};