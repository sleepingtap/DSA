class Solution {
public:
    int minPartitions(string n) 
    {
        
        char s=n[0];
        for(int i=1;i<n.size();i++)
        {
            s=max(s,n[i]);
        }
        string s1="";
        s1+=s;
        int ans=stoi(s1);
        return ans;
        
    }
};