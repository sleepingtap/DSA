class Solution {
public:
    int trailingZeroes(int n)
    {
        //if(n)
        int a=0;
        for(int i=1;i<=n;i++)
        {
            if(5*i>n)
            {
                break;
            }
            a+=(n/(pow(5,i)));
        }
        return a;
        
    }
};