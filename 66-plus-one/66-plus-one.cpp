class Solution {
public:
    vector<int> plusOne(vector<int>& a) 
    {
        vector<int>v;
        int k=0;int f=1;
        int i=a.size()-1;
        a[i]=a[i]+1;int bchahua=0;
        while(i>=0)
        {
            
            a[i]=a[i]+k/10;
            
            if(a[i]>9)
            {
                k=a[i];
                a[i]=k%10;
                bchahua=k/10;
            }
            else
            {
                f=0;
                break;
            }
            i--;
        }
        if(f!=0)
        {
            v.push_back(bchahua);
            for(int i=0;i<a.size();i++)
               v.push_back(a[i]);
            return v;
        }
        // a++;int k=0;
        // while(a>=1)
        // {
        //     k=a%10;
        //     v.push_back(k);
        //     a=a/10;
        // }
        // reverse(v.begin(),v.end());
        return a;
    }
};