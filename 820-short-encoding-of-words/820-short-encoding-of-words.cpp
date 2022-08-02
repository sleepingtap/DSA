class Solution {
public:
    static bool sortbylen(string &a,string&b)
    {
        return a.size()>b.size();
    }
    int minimumLengthEncoding(vector<string>& words) 
    {
        sort(words.begin(),words.end(),sortbylen);
        string enc=words[0]+"#";
        
        for(int i=0;i<words.size();i++)
        {
            if(enc.find(words[i]+"#")==-1)
                enc+=words[i]+"#";
        }
        return enc.size();
    }
};