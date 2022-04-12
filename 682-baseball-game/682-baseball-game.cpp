class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int sum=0;
        stack<int>s;
        //char ch;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]!="+" && ops[i]!="D" && ops[i]!="C")
            {
                
                s.push(stoi(ops[i]));
            }
            if(ops[i]=="+")
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                int c=a+b;
                s.push(a);
                s.push(c);
            }
            if(ops[i]=="D")
            {
                int d=s.top();
                
                s.push(2*d);
            }
            if(ops[i]=="C")
            {
                int e=s.top();
                s.pop();
            }
        }
        while(!s.empty())
        {
            int t=s.top();
            s.pop();
            sum+=t;  
        }
        return sum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
//         stack<int> st;
        
//         for(int i=0;i<ops.size();i++){
//             if(ops[i]=="D"){
//                 int x=st.top();
//                 st.push(x*2);
//             }
//             else if(ops[i]=="C"){
//                 st.pop();
//             }
//             else if(ops[i]=="+"){
//                 int x= st.top();
//                 st.pop();
//                 int y=st.top();
//                 st.push(x);
//                 st.push(x +y);
                
//             }
//             else{
//                 int x=stoi(ops[i]);
//                 st.push(x);
//             }
//         }
//         int sum=0;
//         while(!st.empty()){
//             int x= st.top();
//             st.pop();
//             sum+=x;
//         }
//         return sum;
        
        
    }
};