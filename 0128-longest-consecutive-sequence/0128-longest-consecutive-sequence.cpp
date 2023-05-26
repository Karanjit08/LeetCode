class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count;
        unordered_set<int>s;
        int i;
        int longest=0;
        if(n==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(auto it: s)
        {
            if(s.find(it-1) == s.end())
            {
                int x = it;
                count=1;
                while(s.find(x+1)!=s.end())
                {
                    count++;
                    x++;
                }
                longest = max(count,longest);
            }
        }
        return longest;
    }
};