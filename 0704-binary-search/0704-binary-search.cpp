class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right,mid;
        int n=nums.size();
        right = n-1;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return -1;
        
    }
};