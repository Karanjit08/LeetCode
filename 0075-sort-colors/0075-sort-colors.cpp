class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0,medium=0,high;
        int n=nums.size();
        high = n-1;
        while(medium<=high)
        {
            if(nums[medium]==0)
            {
                swap(nums[left],nums[medium]);
                left++;
                medium++;
            }
            else if(nums[medium]==1)
            {
                medium++;
            }
            else if(nums[medium]==2)
            {
                swap(nums[medium],nums[high]);
                high--;
            }
        }
        
        
    }
};