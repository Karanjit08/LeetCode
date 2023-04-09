class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        vector<int>zeroCount;
        int i;
        int count=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
               zeroCount.push_back(count);
               count=0;   
            }
        }
        zeroCount.push_back(count);
        i=0;
        int max = zeroCount[0];
        for(i=0;i<zeroCount.size();i++)
        {
            if(zeroCount[i]>max)
            {
                max = zeroCount[i];
            }
        }
        return max;
        
    }
};