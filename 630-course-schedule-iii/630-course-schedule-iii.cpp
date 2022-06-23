class Solution {
public:
    static bool sortbysec(const vector<int>&a,const vector<int>&b)
    {
        return (a[1] < b[1]);
    }
    int scheduleCourse(vector<vector<int>>& c) 
    {
        int sum=0;
        sort(c.begin(), c.end(), sortbysec);
        priority_queue<int>q;       //max heap

        for(int i=0;i<c.size();i++)
        {
            sum+=c[i][0];
            q.push(c[i][0]);
            if(sum>c[i][1])
            {
                sum-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};