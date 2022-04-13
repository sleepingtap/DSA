class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int sum=1;
       // int i,j=0;
        int left =0,right=n-1;
        int top=0,down=n-1;
        
        while(top<=down)
        {
            int i=top;
            for(int j=left;j<=right;j++)
            {
                ans[i][j]=sum++;
               // sum++;
            }
            top++;
            int j=right;
            for(int i=top;i<=down;i++)
            {
                ans[i][j]=sum++;
               // sum++;
            }
            right--;
            i=down;
            for(int j=right;j>=left;j--)
            {
                ans[i][j]=sum++;
                //sum++;
            }
            down--;
            j=left;
            for(int i=down;i>=top;i--)
            {
                ans[i][j]=sum++;
            //    sum++;
            }
            left++;
        }
        return ans;
    }
};