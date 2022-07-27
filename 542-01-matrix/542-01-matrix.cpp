class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)q.push({i,j});
            }
        }
        
        while(!q.empty()){
            
            int s=q.size();
            
            // for(int k=0;k<s;k++){
                
                auto ele=q.front();
                q.pop();
                
                int i=ele.first,j=ele.second;
                
                if(i>0 && mat[i-1][j]==1 && !ans[i-1][j]){
                    ans[i-1][j]=1;
                    mat[i-1][j]=mat[i][j]+1;
                    q.push({i-1,j});
                }
                 
                if(i<m-1 && mat[i+1][j]==1 && !ans[i+1][j]){
                    ans[i+1][j]=1;
                    mat[i+1][j]=mat[i][j]+1;
                    q.push({i+1,j});
                }
                 
                if(j>0 && mat[i][j-1]==1 && !ans[i][j-1]){
                    ans[i][j-1]=1;
                    mat[i][j-1]=mat[i][j]+1;
                    q.push({i,j-1});
                }
                 
                if(j<n-1 && mat[i][j+1]==1 && !ans[i][j+1]){            
                    ans[i][j+1]=1;
                    mat[i][j+1]=mat[i][j]+1;
                    q.push({i,j+1});
                }
            //}
        }
        
        return mat;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int n=mat.size();
//         int m=mat[0].size();
//         vector<vector<int>>ans(n,vector<int>(m,0));
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(mat[i][j]==0)
//                 {
//                     ans[i][j]=0;
//                     //break;
//                 }
//             }
//         }
       
//         vector<vector<int>>vis(n,vector<int>(m,0));
//                 if(!vis[i][j])
//                 {
//                     queue<pair<int,int>>q;
//                     q.push({i,j});
//                     vis[i][j]=1;
//                     int level=0;
//                     while(!q.empty())
//                     {
//                         int a=q.front().first;
//                         int b=q.front().second;
//                         q.pop();
//                         level++;
//                         if(a+1<n && ans[a][b]==0)
//                         {
//                             q.push({a+1,b});
//                             vis[a+1][b]=1;
//                             if(mat[a+1][b]==0)
//                             {
//                                 ans[a][b]=level;
//                                 break;
//                             }
//                         }
//                         if(b+1<m && ans[a][b]==0)
//                         {
//                             q.push({a,b+1});
//                             vis[a][b+1]=1;
//                             if(mat[a][b+1]==0)
//                             {
//                                 ans[a][b]=level;
//                                 break;
//                             }
//                         }
//                         if(a-1>=0 && ans[a][b]==0)
//                         {
//                             q.push({a-1,b});
//                             vis[a-1][b]=1;
//                             if(mat[a-1][b]==0)
//                             {
//                                 ans[a][b]=level;
//                                 break;
//                             }
//                         }
//                         if(b-1>=0 && ans[a][b]==0 && mat[a][b-1]==1)
//                         {
//                             q.push({a,b-1});
//                             vis[a][b-1]=1;
//                             if(mat[a][b-1]==0)
//                             {
//                                 ans[a][b]=level;
//                                 break;
//                             }
//                         }
//                     }
//                     while(!q.empty())
//                     {
//                         q.pop();
//                     }
//                     break;
//                 }
//             }
//         }
//         return ans;
    }
};