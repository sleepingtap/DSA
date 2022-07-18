class Solution {
public:
    string reverseWords(string s) 
    {
        s+=" ";
        int n=s.size();
        int i=0;int j=1;int k=0;
        while(i<n && j<n)
        {
            if(s[i]!=' ' && s[j]!=' ')
            {
                j++;
            }
            else if(s[i]!=' '&& s[j]==' ')
            {
                k=j-1;
                while(i<=k)
                {
                    swap(s[i],s[k]);
                    i++;
                    k--;
                }
                i=j; 
            }
            else if(s[i]==' ' && s[j]==' ')
            {
                i++;
                j++;
            }
        }
        s.pop_back();
        return s;
    }
};