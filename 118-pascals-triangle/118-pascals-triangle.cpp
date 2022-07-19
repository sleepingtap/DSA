class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans(numRows);
        for(int i=1;i<=numRows;i++)
        {
            vector<int>v(i);
            v[0]=1;
            v[i-1]=1;
            for(int k=1;k<i-1;k++)
            {
                if(i-2>=0)
                {
                    v[k]=ans[i-2][k-1]+ans[i-2][k];
                } 
            }
            ans[i-1]=v;
        }
        return ans;
    }
};