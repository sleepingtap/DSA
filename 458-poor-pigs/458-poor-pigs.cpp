class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) 
    {
        int chance = minutesToTest/minutesToDie+1;
        int ans=0;
        int countbuckets=1;
        while(countbuckets<buckets)
        {
            countbuckets*=chance;
            ans++;
        }
        return ans;
    }
};