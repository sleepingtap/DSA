class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) 
    {
        long long int mod=1000000007;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        vector<int>v1,v2;
        v1.push_back(0);
        for(int i=0;i<hc.size();i++)
        {
            v1.push_back(hc[i]);
        }
        if(v1[v1.size()-1]!=h)
        {
            v1.push_back(h);
        }
        v2.push_back(0);
        for(int i=0;i<vc.size();i++)
        {
            v2.push_back(vc[i]);
        }
        if(v2[v2.size()-1]!=w)
        {
            v2.push_back(w);
        }
        int max1=0;
        for(int i=1;i<v1.size();i++)
        {
            max1=max(max1,abs(v1[i-1]-v1[i]));
        }
        int max2=0;
        for(int i=1;i<v2.size();i++)
        {
            max2=max(max2,abs(v2[i-1]-v2[i]));
        }
        return (max1%mod*max2%mod)%mod;
        
        
        
    }
};