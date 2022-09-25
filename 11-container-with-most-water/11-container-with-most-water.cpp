class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int i=0;int j=n-1;
        int maxi=0;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                maxi=max(maxi,height[i]*(j-i));
                i++;
            }
            else
            {
                maxi=max(maxi,height[j]*(j-i));
                j--;
            }
        }
        return maxi;
    }
};