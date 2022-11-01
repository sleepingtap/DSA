class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n=ratings.size();
        vector<int>l(n,1);
        vector<int>r(n,1);
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                l[i]=1+l[i-1];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                r[i]=1+r[i+1];
            }
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=max(l[i],r[i]);
        }
        return s;
        // int n=ratings.size();
        // if(n==1)
        // {
        //     return 1;
        // }
        // vector<int>t(n,0);
        // if(ratings[0]>ratings[1])
        // {
        //     t[0]=2;
        // }
        // else
        // {
        //     t[0]=1;
        // }
        // for(int i=1;i<n;i++)
        // {
        //     if(ratings[i-1]<ratings[i])
        //     {
        //         t[i]=t[i-1]+1;
        //     }
        //     else if(ratings[i-1]>ratings[i])
        //     {
        //         t[i]=1;
        //         int j=i;
        //         while(j>=0)
        //         {
        //             if((j-1>=0 && ratings[j-1]>ratings[j]) && (t[j-1]-t[j]==0))
        //             {
        //                 t[j-1]++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //             j--;
        //         }
        //     }
        //     else
        //     {
        //         t[i]=1;
        //     }
        // }
        // int s=0;
        // for(int i=0;i<n;i++)
        // {
        //     s+=t[i];
        // }
        // return s;
    }
};