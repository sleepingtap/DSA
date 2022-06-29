class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])return a[1]<b[1];
        return a[0]>b[0];
    }
   
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        int n=people.size();
        vector<vector<int>>dp;
        sort(people.begin(),people.end(),comp);
       
        for(int i=0;i<n;i++)
        {
            int a=people[i][1];
            dp.insert(dp.begin()+a,people[i]);
        }
        return dp;
        
    }
};