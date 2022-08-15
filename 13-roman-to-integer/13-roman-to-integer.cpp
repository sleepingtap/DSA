class Solution {
public:
    int romanToInt(string s) 
    {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                sum+=1;
            }
            if(s[i]=='V')
            {
                if(i-1>=0 && s[i-1]=='I')
                {
                    sum+=(4-1);
                }
                else
                {
                    sum+=5;
                }
            }
            if(s[i]=='X')
            {
                if(i-1>=0 && s[i-1]=='I')
                {
                    sum+=(9-1);
                }
                else
                {
                    sum+=10;
                }
            }
            if(s[i]=='L')
            {
                if(i-1>=0 && s[i-1]=='X')
                {
                    sum+=(40-10);
                }
                else
                {
                    sum+=50;
                }
            }
            if(s[i]=='C')
            {
                if(i-1>=0 && s[i-1]=='X')
                {
                    sum+=(90-10);
                }
                else
                {
                    sum+=100;
                }
            }
            if(s[i]=='D')
            {
                if(i-1>=0 && s[i-1]=='C')
                {
                    sum+=(400-100);
                }
                else
                {
                    sum+=500;
                }
            }
            if(s[i]=='M')
            {
                if(i-1>=0 && s[i-1]=='C')
                {
                    sum+=(900-100);
                }
                else
                {
                    sum+=1000;
                }
            }
        }
        return sum;
    }
};