class Solution {
public:
    int maximumGroups(vector<int>& grades) 
    {
       //  unordered_map<int,int>mp;
       //  for(int i=0;i<grades.size();i++)
       //  {
       //      mp[grades[i]]++;
       //  }
       //  int c=mp.size();int a=0;
       // // cout<<c;
        int n=grades.size();int c=0,sum=0;int a=0;
        for(int i=1;i<=n;i++)
        {
            c=(i*(i+1))/2;
            if(n==c)
            {
                a=i;
                break;
            }
            else if(n<c)
            {
                a=i-1;
                break;
            }

            
        }
        return a;
    }
};