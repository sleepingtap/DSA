class Solution {
public:
    int reverse(int x) 
    {
        
        string a=to_string(x);int i=0;
        if(a[0]!='-')
        {   
            while(i<a.size()/2)
            {
                swap(a[i],a[a.size()-i-1]);
                i++;
            }
        }
        else
        {
            i=1;
            while(i<=a.size()/2)
            {
                swap(a[i],a[a.size()-i]);
                i++;
            }
        }
        int n=a.size();long long int ans=0;
       
        if(a[0]!='-')
        {
            for(int i=0;i<n;i++)
            {
                ans=ans*10+int((a[i])-48);
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                ans=ans*10+int((a[i])-48);
            }
            if((-ans)<pow(-2,31) || (-ans)>pow(2,31)-1)
            {
                return 0;
            }
            return (-ans);
        }
        if(ans<pow(-2,31) || ans>pow(2,31)-1)
        {
            return 0;
        }
        return ans;
    }
};