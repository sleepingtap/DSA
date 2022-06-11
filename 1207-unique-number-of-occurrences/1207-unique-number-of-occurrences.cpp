class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        arr.clear();
        for(auto i:mp)
        {
            arr.push_back(i.second);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                return false;
            }
        }
        return true;
    }
};