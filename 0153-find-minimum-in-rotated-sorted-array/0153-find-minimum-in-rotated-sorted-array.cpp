class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int mid;
        int ans,flag=0;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]>=nums[0])
            {
                left = mid+1;
                // ans = nums[mid];
            }
            else
            {
                ans = nums[mid];
                flag=1;
                right = mid-1;
            }
        }
        if(flag==0)
        {
            ans = nums[0];
        }
        return ans;
        
    }
};