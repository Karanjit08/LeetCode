class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        while(i<n && j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
        
        
    }
};