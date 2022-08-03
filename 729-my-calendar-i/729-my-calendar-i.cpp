class MyCalendar {
public:

    vector<pair<int,int>>v;
    MyCalendar() 
    {
        
    }
   
    bool book(int start, int end) 
    {
        bool f=true;
        for(auto i:v)
        {
            if(start>=i.second || end<=i.first)
            {
                f=true;
            }
            else
            {
                f=false;
                break;
            }
        }
        if(f==true)
        {
            v.push_back({start,end});
        }
        return f;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */