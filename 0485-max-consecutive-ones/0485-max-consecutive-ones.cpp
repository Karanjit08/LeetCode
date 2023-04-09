class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i;
        int count=0;
        int countMax=0;
        for(i=0;i<n;i++)
        {
        
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
               if(countMax<=count)
               {
                   countMax = count;
               }
                count=0;
            }
        }
        if(countMax<=count)
        {
            countMax = count;
        }
        
        return countMax;
        
        
    }
};