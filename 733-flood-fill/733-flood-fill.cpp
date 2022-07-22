class Solution {
public:
        bool isvalid(int i,int j,vector<vector<int>>& matrix,int color,vector<vector<int>>&vis,int a)
        {
            if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]!=a || vis[i][j]==0)
            {
                return false;
            }
            return true;
        }
        void f(int i,int j,vector<vector<int>>& matrix, int color, vector<vector<int>>&vis,int a)
        {
            
            matrix[i][j]=color;
            vis[i][j]=0;
            if(isvalid(i+1,j,matrix,color,vis,a)==true)
            {
                matrix[i+1][j]=color;
                vis[i+1][j]=0;
                f(i+1,j,matrix,color,vis,a);
            }
            if(isvalid(i-1,j,matrix,color,vis,a)==true)
            {
                matrix[i-1][j]=color;
                 vis[i-1][j]=0;
                f(i-1,j,matrix,color,vis,a);
            }
        
            if(isvalid(i,j+1,matrix,color,vis,a)==true)
            {
                matrix[i][j+1]=color;
                vis[i][j]=0;
                f(i,j+1,matrix,color,vis,a);
            }
            
            if(isvalid(i,j-1,matrix,color,vis,a)==true)
            {
                matrix[i][j-1]=color;
                vis[i][j-1]=0;
                f(i,j-1,matrix,color,vis,a);
            }
        }
    
        vector<vector<int>> floodFill(vector<vector<int>>& matrix, int sr, int sc, int color) 
        {
            vector<vector<int>>vis(matrix.size(),vector<int>(matrix[0].size(),-1));
            int a=matrix[sr][sc];
            f(sr,sc,matrix,color,vis,a);
            return matrix;
        }
};