class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) 
    {
        priority_queue<int>pq;
        int n=h.size();
        for(int i=1;i<n;i++)
        {
            int d=h[i]-h[i-1];
            if(d>0)
            {
                pq.push(d);
                bricks-=d;
                if(bricks<0)
                {
                    ladders--;
                    bricks+=pq.top();
                    pq.pop();
                    if(bricks<0 || ladders<0)
                    {
                        return i-1;
                    }
                }
            }
        }
        return n-1;
        
//         int ans=-1;
//         int n=h.size();
//         vector<int>v(n);
//         v[0]=0;
//         for(int i=1;i<n;i++)
//         {
//             v[i]=h[i]-h[i-1];
//         }
//         for(int i=0;i<n;i++)
//         {
            
//             if(v[i]<=0)
//             {
//                 ans++;
//             }
//             else
//             {
//                 if(ladders==0 && v[i]>bricks)
//                 {
//                     break;
//                 }
//                 if(v[i]<=bricks)
//                 {
//                     bricks-=v[i];
//                     ans++;
//                 }
//                 else if(ladders!=0)
//                 {
//                     ans++;
//                     ladders--;
//                 }
//             }
//         }
//         return ans;
    }
};