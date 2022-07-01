class Solution {
public:
    static bool comp(vector<int> &a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& box, int truck) 
    {
        sort(box.begin(),box.end(),comp);int k=0;
        for(int i=0;i<box.size();i++)
        {
            if(box[i][0]<=truck)
            {
                k+=(box[i][0]*box[i][1]);
                truck-=box[i][0];
            }
            else
            {
                if(truck!=0)
                {
                    k+=truck*box[i][1];
                    truck=0;
                }
                else
                {
                    break;
                }
            }
        }
        return k;
    }
};