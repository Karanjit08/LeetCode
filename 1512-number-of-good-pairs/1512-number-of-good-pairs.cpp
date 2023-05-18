class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,count=0;
        int j;
        for(i=0;i<nums.size()-1;i++)
        {
            j = i+1;
            while(j<nums.size())
            {
                if(nums[i]==nums[j] && i<j)
                {
                    count++;
                }
                j++;
            }
        }
        return count;
    }
};