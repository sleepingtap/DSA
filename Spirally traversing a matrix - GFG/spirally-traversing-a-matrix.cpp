// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        //int i,j=0;
        int left=0,top=0;
        int right=c-1;
        int down=r-1;
        vector<int>v;
        int count=0;
        
        while(left<=right && top<=down)
        {
            //int i=top;
            for(int j=left;j<=right;j++)
            {
                v.push_back(matrix[top][j]);
            }
            top++;
            //int j=right;
            for(int i=top;i<=down;i++)
            {
                v.push_back(matrix[i][right]);
            }
            right--;
            //i=down;
            if(top<=down){
            for(int j=right;j>=left;j--)
            {
                v.push_back(matrix[down][j]);
            }
            down--;}
            //j=left;
            if(left<=right){
            for(int i=down;i>=top;i--)
            {
                v.push_back(matrix[i][left]);
            }
            left++;}
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends