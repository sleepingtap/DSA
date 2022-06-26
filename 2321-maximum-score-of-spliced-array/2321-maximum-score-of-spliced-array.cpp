class Solution {
public:
    int maxsubsum(vector<int>v)
    {
        int n=v.size();
        int sum=v[0];
        int cur=v[0];
        for(int i=1;i<n;i++)
        {
            sum=max(v[i],v[i]+sum);
            cur=max(cur,sum);
        }
        return cur;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) 
    {
        int s1=0;int s2=0;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            s1+=nums1[i];
            s2+=nums2[i];
        }
        // int ans=0;
        // ans=max(ans,max(s1,s2));
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++)
        {
            v1[i]=nums1[i]-nums2[i];
            v2[i]=nums2[i]-nums1[i];
        }
        return max(s1+maxsubsum(v2),s2+maxsubsum(v1));
        
    }
};