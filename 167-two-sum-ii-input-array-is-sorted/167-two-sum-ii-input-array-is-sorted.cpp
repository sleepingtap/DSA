class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) 
    {
        int n=num.size();
        vector<int>v(2);
        for(int i=0;i<n;i++)
        {
            int find=target-num[i];
            int l=i+1;
            int h=n-1;
            while(l<=h)
            {
                int m=l+(h-l)/2;
                if(num[m]==find)
                {
                    v[0]=i+1;
                    v[1]=m+1;
                    break;
                }
                else if(num[m]>find)
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