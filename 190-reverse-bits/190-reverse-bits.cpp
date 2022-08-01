class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        bitset<32>bt(n);
        int l=0,r=31;
        while(l<=r)
        {
            bool temp=bt[l];
            bt[l]=bt[r];
            bt[r]=temp;
            l++;
            r--;
        }
        
        
        return bt.to_ullong();
    }
};