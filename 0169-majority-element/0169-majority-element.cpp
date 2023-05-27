class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int max=0;
        int maxSecond=0;
        for(auto it: m)
        {
            int t = it.first;
            if(it.second > maxSecond)
            {
                maxSecond = it.second;
                max = t;
            }
        }
        return max;
    }
};