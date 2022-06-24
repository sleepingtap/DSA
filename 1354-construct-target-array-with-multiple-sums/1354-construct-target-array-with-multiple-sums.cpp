class Solution {
public:
    bool isPossible(vector<int>& target) 
    {
        long long int sum=0; 
    priority_queue<int> pq;
    
    for(int i=0; i<target.size();i++){
        sum+=target[i];
        pq.push(target[i]);
    }
    
    while(pq.top()!=1){
        int val=pq.top(); pq.pop();   
        long long int d=sum-val;
        if(d==1) return true;
        if(d>val || d==0 || val%d==0) return false;
    
        val%=d;
        sum=d+val;
        pq.push(val);
    }
    return true;
        
    }
};