//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool valid(int i,int j,int oldc,vector<vector<int>>& image)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=oldc)
        {
            return false;
        }
        return true;
    }
    void f(int i,int j,int oldc,vector<vector<int>>& image,int newColor)
    {
        image[i][j]=newColor;
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        for(int d=0;d<4;d++)
        {
            int nx=x[d]+i;
            int ny=y[d]+j;
            if(valid(nx,ny,oldc,image))
            {
                f(nx,ny,oldc,image,newColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        // Code here 
        
        int oldc=image[sr][sc];
        if(oldc==newColor)
        {
            return image;
        }
        f(sr,sc,oldc,image,newColor);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends