class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i;
        int n=nums.size();
        int count=0,maxi=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(count>maxi)
                {
                    maxi = count;
                }
                
                
                count=0;
            }
            
        }
        
        int ans = max(count,maxi);
        return ans;
        
    }
};