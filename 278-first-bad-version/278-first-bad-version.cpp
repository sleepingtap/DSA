// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int l=1;
        int h=n;

        while(l+1<h)
        {
            int m=l+(h-l)/2;
            if(isBadVersion(m)==true)
            {
                h=m;
            }
            else
            {
                l=m;
            }
        }
        if(isBadVersion(l)==true)
        {
            return l;
        }
        return h;
    }
};