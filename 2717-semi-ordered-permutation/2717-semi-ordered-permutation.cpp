class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int index;
        int i;
        
        if(nums[0]!=1)
        {
            for(i=0;i<n;i++)
            {
                if(nums[i]==1)
                {
                    index = i;
                    break;
                }
            }
            for(i=index;i>0;i--)
            {
                nums[i] = nums[i-1];
                // swap(nums[i],nums[i-1]);
                count++;
            }
            nums[0]=1;
        }
        
        if(nums[n-1]!=n)
        {
            for(i=0;i<n;i++)
            {
                if(nums[i]==n)
                {
                    index=i;
                    break;
                }
            }
            for(i=index;i<n-1;i++)
            {
                nums[i] = nums[i+1];
                count++;
            }
            // nums[n-1] = n;
        }
        return count;
    }
};