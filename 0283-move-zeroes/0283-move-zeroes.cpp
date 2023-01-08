class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        i=0;j=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]!=0)
            {
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        while(j<n)
        {
            nums[j] = 0;
            j++;
        }
        
    }
};