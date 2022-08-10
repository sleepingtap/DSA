class Solution {
public:
    
    void solve(int ind,string digits,vector<string> &v,vector<string> &res,string &s){
        
        if(s.length() == digits.length()){
            res.push_back(s);
            return;
        }
        
        int num = digits[ind] -'0';
        for(int i=0;i<v[num].size();i++ ){
            s+=v[num][i];
            solve(ind+1,digits,v,res,s);
            s.pop_back();
        }
        return;
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        vector<string> v(10);
        v[2] ="abc";
        v[3]="def";
        v[4]="ghi";
        v[5]="jkl";
        v[6]="mno";
        v[7]="pqrs";
        v[8]="tuv";
        v[9]="wxyz";
        
        vector<string> res;
        string s="";
        solve(0,digits,v,res,s);
        return res;
    }
};