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
       
        for(auto i:people)
        {
            dp.insert(dp.begin()+i[1],i);
        }
        return dp;
        
    }
};