// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/

int maxChainLen(struct val p[],int n)
{
   //Your code here
   //use LIS after sorting
    sort(p, p+n, [](auto a, auto b){
       return a.second < b.second;
   });
   vector<int>lis(n,1);
   int i=1;
   int j=0;
   while(i<n)
   {
       j=0;
       while(j<i)
       {
           if(p[i].first>p[j].second && lis[i]<=lis[j])
           {
               lis[i]=1+lis[j];
           }
           j++;
       }
       i++;
   }
   int ans=lis[0];
   for(int i=1;i<n;i++)
   {
       ans=max(ans,lis[i]);
   }
   return ans;
}