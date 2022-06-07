class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) 
    {
        vector<int>v(2,0);
        int n=num.size();
        for(int i=0;i<n-1;i++)
        {
            
            int l=i+1;
            int h=n-1;
            while(l<=h)
            {
                int m=l+(h-l)/2;
                if(num[m]==target-num[i])
                {
                    v[0]=i+1;
                    v[1]=m+1;
                    break;
                }
                else if(num[m]>target-num[i])
                {
                    h=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
        }
        return v;
        
    }
};