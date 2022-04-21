class Solution {
public:
    bool isPerfectSquare(int num) 
    {
       long long int n=num/2;
       long long int l=1;
       long long int h=n;
        if(num==1)
            return true;
        while(l<=h)
        {     // cout<<l<<" "<<h
           long long int m=l+(h-l)/2;
            cout<<m<<endl;
            if(m*m==num)
            {
                return true;
            }
            else if(m*m<num)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return false;
    }
};