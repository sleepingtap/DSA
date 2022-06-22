class Solution {
public:
    int strStr(string h, string n) 
    {
        if(h.empty())
        {
            return 0;
        }
        int n1=h.size();
        int n2=n.size();
        int i=0;
        // int j=i+n2;
        // string s="";
        while(i+n2<=n1)
        {
            
            if(h.substr(i,n2)==n)
            {
                return i;
                break;
            }
            i++;
            // j++;
        }
        return -1;
    }
};