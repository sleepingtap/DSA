class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int ans=0;
        map<int,int>mp;
        priority_queue<int> pq;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        int c=arr.size()/2;int s=0;
        while(!pq.empty())
        {
            s+=pq.top();
            pq.pop();
            ans++;
            if(s>=c)
            {
                break;
            }
        }
        return ans;
    }
};