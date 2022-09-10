class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        vector<int>max_slid_window;
        list<int>maximums;
        int minofwindow=0;
        int maxofwindow=0;
        while(maxofwindow<nums.size())
        {
            while(maximums.size()>0 && nums[maxofwindow]>maximums.back())
            {
                maximums.pop_back();
            }
            maximums.push_back(nums[maxofwindow]);
            if(maxofwindow-minofwindow+1<k)
            {
                maxofwindow++;
            }
            else if(maxofwindow-minofwindow+1==k)
            {
                max_slid_window.push_back(maximums.front());
                if(nums[minofwindow]==maximums.front())
                {
                    maximums.pop_front();
                }
                minofwindow++;
                maxofwindow++;
            }
        }
        return max_slid_window;
        
    }
};