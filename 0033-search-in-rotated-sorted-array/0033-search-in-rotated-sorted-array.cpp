class Solution {
public:
    int pivotIndex(vector<int>& nums, int n)
    {
        int left=0,right=n-1;
        int mid;
        while(left<right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]>=nums[0])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return right;
    }
    int binarySearch(vector<int>& nums, int target, int left, int right)
    {
        int mid,n=nums.size();
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
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot = pivotIndex(nums,n);
        int ans;
        if(nums[pivot]<=target && target<=nums[n-1])
        {
            ans = binarySearch(nums,target,pivot,n-1);
        }
        else
        {
            ans = binarySearch(nums,target,0,pivot-1);
        }
        return ans;
        
    }
};