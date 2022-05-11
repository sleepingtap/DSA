// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void sub(int index,vector<int>& A,vector<int> & res,vector<vector<int>> &ans)
    {
        if(index==A.size())
        {
            ans.push_back(res);
            return;
        }
        res.push_back(A[index]);
        sub(index+1,A,res,ans);
        //ans.push_back(A[index]);
        res.pop_back();
        sub(index+1,A,res,ans);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code 
        vector<vector<int>>ans;
        vector<int>res;
        sub(0,A,res,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends