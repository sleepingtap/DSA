class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<0)
        {
            return false;
        }
        bitset<32>bt(n);
        int c=0;
        
        for(int i=0;i<bt.size();i++)
        {
            //cout<<bt[i]<<" ";
            if(bt[i]==1)
            {
                c++;
            }
        }
        if(c==1)
        {
            return true;
        }
        return false;
    }
};