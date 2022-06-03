class NumMatrix 
{
private:
    vector<vector<int>>ans;
public:
    
    NumMatrix(vector<vector<int>>& matrix) 
    {
        if(matrix.size()==0 || matrix[0].size()==0)
        {
            return;
        }
        ans=vector<vector<int>>(matrix.size(),vector<int>(matrix[0].size()));
        ans[0][0]=matrix[0][0];
        
        for(int i=1;i<matrix[0].size();i++)
        {
            ans[0][i]=matrix[0][i]+ans[0][i-1];
        }
        for(int i=1;i<matrix.size();i++)
        {
            ans[i][0]=matrix[i][0]+ans[i-1][0];
        }
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                ans[i][j]=matrix[i][j]+ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1];
            }
        } 
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        int total=ans[row2][col2];
        if(row1-1>=0)
        {
            total-=ans[row1-1][col2];
        }
        if(col1-1>=0)
        {
            total-=ans[row2][col1-1];
        }
        if(row1-1>=0 && col1-1>=0)
        {
            total+=ans[row1-1][col1-1];
        }
        return total;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */