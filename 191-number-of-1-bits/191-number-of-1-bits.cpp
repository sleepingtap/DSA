class Solution {
public:
    //  void tobin(uint32_t n)
    // {
    //     if(n>1)
    //     {
    //         tobin(n/2);
    //     }
    //     cout<<n%2;
    // }
    int hammingWeight(uint32_t n) 
    {
       
        
        // cout<<n<<endl;
        // string s=to_string(n);
        // cout<<s<<endl;
        // int c=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]==1)
        //     {
        //         c++;
        //     }
        // }
        // return c;
        int c=0;
        while(n>0)
        {
            int k=n%2;
            //cout<<n<<" "<<endl;
            if(k==1)
            {
                c++;
            }
            n=n/2;
        }
        //cout<<c<<endl;
        return c;
    }
};