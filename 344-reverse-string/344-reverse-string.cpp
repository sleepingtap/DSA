class Solution {
public:
    void r(vector<char>&s,int i,int j)
    {
        if(i>=j)
            return;
        swap(s[i],s[j]);
        r(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) 
    {
        
        return r(s,0,s.size()-1);
        // int l=0;
        // int h=s.size()-1;
        // while(l<=h)
        // {
        //     swap(s[l],s[h]);
        //     l++;
        //     h--;
        // }
        
    }
};