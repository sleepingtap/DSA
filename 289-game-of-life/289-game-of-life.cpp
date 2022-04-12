class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        
        //int dead=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int live=0;
                if((i+1)!=m && board[i+1][j] ==1)
                {
                    live++;
                }
                if( (j+1)!=n && board[i][j+1]==1 )
                {
                    live++;
                }
                if((i+1)!=m && (j+1)!=n && board[i+1][j+1]==1 )
                {
                    live++;
                }
                if((i-1>=0) && (j-1>=0) && board[i-1][j-1]==1)
                {
                    live++;
                }
                if((i-1>=0) && board[i-1][j]==1 )
                {
                    live++;
                }
                if((j-1>=0) && board[i][j-1]==1 )
                {
                    live++;
                }
                if((j-1>=0) && (i+1)!=m && board[i+1][j-1]==1 )
                {
                    live++;
                }
                if((i-1>=0) && (j+1)!=n && board[i-1][j+1]==1 )
                {
                    live++;
                }
                if(board[i][j]==0)
                {
                    if(live==3)
                    {
                        ans[i][j]=1;
                    }
                }
                if(board[i][j]==1)
                {
                    if(live<2 || live>3)
                    {
                        ans[i][j]=0;
                    }
                    else if(live==2 || live==3)
                    {
                        ans[i][j]=1;
                    }
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                board[i][j]=ans[i][j];
            }
        }
        
    }
};