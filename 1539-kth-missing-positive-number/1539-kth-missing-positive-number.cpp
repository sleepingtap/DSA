class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n=arr.size();
        int l=0;
        int h=n-1;
       /* if(arr[0]>k)
        {
            return k;
        }*/
        while(l<=h)
        {
            //cout<<arr[l]<<" "<<l;
            int m=l+(h-l)/2;
            if((arr[m]-(m+1))<k)
            {
                l=m+1;
                //cout<<l;
            }
            else //if((arr[m]-(m+1))>k)
            {
                h=m-1;
            }
        }
       // cout<<l;
        // if(l>h)
        // {
           // cout<<l<<" "<<h;
          /*  if(arr[h]-(h+1)<k)
            {
                return arr[h]+(k-(arr[h]-(h+1)));*/
            //}
            // else
            // {
            //     return k;
            // }
        // }
        return l+k;
    }
};