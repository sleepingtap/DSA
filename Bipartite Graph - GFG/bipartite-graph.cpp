// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    // bool bibfs(int ind, vector<int>adj[],vector<int>& color)
    // {
    //     color[ind]=0;
    //     queue<int>q;
    //     q.push(ind);
    //     while(!q.empty())
    //     {
    //         int node=q.front();
    //         q.pop();
    //         for(auto it:adj[node])
    //         {
    //             if(color[it]==-1)
    //             {
    //                 color[it]=1+color[node];
    //                 q.push(it);
    //             }
    //             else
    //             {
    //                 if(color[it]==color[node])
    //                 {
    //                     return false;
    //                 }
    //             }
    //         }
    //     }
    //     return true;
    // }
    bool bidfs(int ind,vector<int>adj[],vector<int>& color)
    {
        if(color[ind]==-1)
        {
            color[ind]=1;
        }
        for(auto it:adj[ind])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[ind];
                if(bidfs(it,adj,color)==false)
                {
                    return false;
                }
            }
            else if(color[it]==color[ind])
            {
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(bidfs(i,adj,color)==false)
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends