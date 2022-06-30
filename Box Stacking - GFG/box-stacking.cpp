// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    struct box{
        int l,w,h;
    };
    static bool compare(struct box a,struct box b)
    {
        return (a.w*a.l>b.w*b.l);
    }
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        int len=3*n;
        box arr[len];
        int index=0;
        for(int i=0;i<n;i++)
        {
            arr[index].h=height[i];
            arr[index].w=max(width[i],length[i]);
            arr[index].l=min(width[i],length[i]);
            index++;
            
            arr[index].h=length[i];
            arr[index].w=max(width[i],height[i]);
            arr[index].l=min(width[i],height[i]);
            index++;
            
            arr[index].h=width[i];
            arr[index].w=max(height[i],length[i]);
            arr[index].l=min(height[i],length[i]);
            index++;
        }
        
        sort(arr,arr+len,compare);
        
        int lis[len];
        for(int i=0;i<len;i++)
        {
            lis[i]=arr[i].h;
        }
        for(int i=1;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if((arr[i].w<arr[j].w) && (arr[i].l<arr[j].l) && lis[i]<lis[j]+arr[i].h)
                {
                    lis[i]=lis[j]+arr[i].h;
                }
            }
        }
        int mx=0;
        for(int i=0;i<len;i++)
        {
            mx=max(mx,lis[i]);
        }
        return mx;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        
    
        int A[105],B[105],C[105];
        for(int i = 0; i < n; i++)cin >> A[i];
        for(int j = 0; j < n; j++)cin >> B[j];
        for(int k = 0; k < n; k++)cin >> C[k];
        Solution ob;
        cout<<ob.maxHeight(A,B,C,n)<<endl;
    }
	
	return 0;
}
	  // } Driver Code Ends