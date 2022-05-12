class Solution {
public:
    int countVowelStrings(int n) 
    {
        //we have to only count
        // a e i 0 u
        // aa ae ai ao au
        //    ee ei eo eu
        //       ii io iu
        //          oo ou
        //             uu
        // so we start from back
        vector<int>ans(5,1);
        for(int i=0;i<n;i++)
        {
            for(int j=3;j>=0;j--)
            {
                ans[j]+=ans[j+1];
            }
        }
        return ans[0];
    }
};