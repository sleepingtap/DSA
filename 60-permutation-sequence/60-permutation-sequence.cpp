class Solution {
public:
    string getPermutation(int n, int k)
    {
        int fact=1;
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            fact=fact*i;
            v.push_back(i);
        }
        v.push_back(n);
        string ans="";
        k=k-1;
        while(true)
        {
            ans=ans+to_string(v[k/fact]);
            v.erase(v.begin()+k/fact);
            if(v.size()==0)
            {
                break;
            }
            k=k%fact;
            fact=fact/v.size();
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    //TLE
//     void per(int index,string &s,vector<string>&ans)
//     {
//         if(index==s.size())
//         {
//             ans.push_back(s);
//             return;
//         }
//         for(int i=index;i<s.size();i++)
//         {
//             swap(s[index],s[i]);
//             per(index+1,s,ans);
//             swap(s[index],s[i]);
//         }   
//     }
//     string getPermutation(int n, int k) 
//     {
//         string s="";
        
//         for(int i=1;i<=n;i++)
//         {
//             string a=to_string(i);
//             s+=a;
//         }
//         //return s;
//         vector<string>ans;
//         per(0,s,ans);
//         sort(ans.begin(),ans.end());
//         return ans[k-1];
        
//     }
};